#include "stdio.h"

main(){
    int op = 1;
    int i, alterar;

    struct funcionario{
        char nome[30];
        int idade;
        float salario;
    };
    struct funcionario func[3];

    int q = -1;

////////////
    char texto_linha[80];
    FILE *arq;
            arq = fopen("registro.txt", "r"); 
  
            if (arq == NULL){
                system("clear");
                printf("Impossivel abrir arquivo!");
                __fpurge(stdin);
                getchar();
            }else{
                while (!feof(arq)){ /* eof - end of file */

                  q = q + 1;
                  
                  fscanf(arq,"%[^;]s;", func[q].nome);
                  fscanf(arq,";%i", &func[q].idade);
                  fscanf(arq,";%f", &func[q].salario);

                  fgets(texto_linha, 30, arq);

                }
                fclose(arq);
            }
////////////

    while(op != 0){
        system("clear");
        printf("\n1 - Incluir");
        printf("\n2 - Alterar");
        printf("\n3 - Excluir");
        printf("\n4 - Listagem");
        printf("\n0 - Sair");
        printf("\n\nDigite a opcao desejada:");
        __fpurge(stdin);
        scanf("%i", &op);

        if(op == 1){
            system("clear");
            printf("# INCLUIR REGISTRO #");

            q = q + 1; 
            if(q < 3){
                printf("\n\n\nDigite o nome do funcionario:");
                scanf("%s", &func[q].nome);
                printf("Digite o idade do funcionario:");
                scanf("%i", &func[q].idade);
                printf("Digite o salario do funcionario:");
                scanf("%f", &func[q].salario);
            }else{
                q = q - 1;
                printf("\n\n\nStruct cheia! tecle enter para voltar ao menu...");
                __fpurge(stdin);
                getchar();
            }
            
        }else if(op == 2){
            system("clear");
            printf("# ALTERAR REGISTRO #");
            printf("\n\nQual registro sera alterado:");
             __fpurge(stdin);
            scanf("%i", &alterar);
            alterar = alterar - 1;
            if(alterar >= 0 && alterar <= q){
                printf("\n\nNome: %s", func[alterar].nome);
                printf("\n\nIdade: %i", func[alterar].idade);
                printf("\n\nSalario: %f", func[alterar].salario);
                printf("\n----------------------------\n");
                printf("\n\n\nDigite o nome do funcionario:");
                scanf("%s", &func[alterar].nome);
                printf("Digite o idade do funcionario:");
                scanf("%i", &func[alterar].idade);
                printf("Digite o salario do funcionario:");
                scanf("%f", &func[alterar].salario);
            }else{
                printf("\n\n\nRegistro nao encontrado...");
                __fpurge(stdin);
                getchar();
            }

        }else if(op == 3){
            system("clear");
            printf("Opcao 3!!!!");
            printf("\n\n\ndigite enter para voltar ao menu...");
            __fpurge(stdin);
            getchar();
        }else if(op == 4){
            system("clear");
            printf("Listagem de Registros");

 

            printf("\n\n\nnome...idade..salario");
            for(i = 0; i <= q; i++){
              printf("\n%s %i %.2f", func[i].nome,func[i].idade,func[i].salario);
            }

 

            printf("\n\n\ndigite enter para voltar ao menu...");
            __fpurge(stdin);
            getchar();
        }else if(op == 0){

            //FILE *arq;
            arq = fopen("registro.txt", "w");

            int flag_primlinha = 1;

            for(i = 0; i <= q; i++){
                if(flag_primlinha == 0){
                  fputs("\n", arq);
                }
                fprintf(arq, "%s;%i;%f;", func[i].nome, func[i].idade, func[i].salario);
                flag_primlinha = 0;
            }

            fclose(arq);

        }else{
            system("clear");
            printf("Opcao invalida!!!!");
            printf("\n\n\ndigite enter para voltar ao menu...");
            __fpurge(stdin);
            getchar();
        } 
   
    }/*while da op*/
}/*main*/


