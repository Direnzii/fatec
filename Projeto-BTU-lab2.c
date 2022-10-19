#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

float btu_funcao (float BTUTOTAL){
	float btu;
 if(BTUTOTAL<7000){
					printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 7000");
				}else
					if(BTUTOTAL>=7000 && BTUTOTAL<9000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 9000");
					}else
						if(BTUTOTAL>=9000 && BTUTOTAL<12000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 12000");
					}else
					if(BTUTOTAL>=12000 && BTUTOTAL<18000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 18000");
					}else
					if(BTUTOTAL>=18000 && BTUTOTAL<24000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 24000");
					}else
					if(BTUTOTAL>=24000 && BTUTOTAL<27000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 27000");
					}else
					if(BTUTOTAL >= 40000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 40000");
					}else
					if(BTUTOTAL >= 50000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 50000");
					}else
					if(BTUTOTAL >= 60000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 60000");
					}else
					if(BTUTOTAL >= 70000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 70000");
					}else
					if(BTUTOTAL >= 80000){
						printf("A QUANTIDADE DE BTUs ADEQUADA SERÁ A DE 80000");
					}
					
return btu;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int LOCAL, AMBIENTE, PESSOAS, BTUPESSOAS, ELETRO, BTUELETRO, TIPOLAMP, BTULAMP, LAMP, SOL;
	float LARGURA, COMPRIMENTO, METRAGEM1, METRAGEM, BTUTOTAL, ORIGPESSOA;
    int continuar = 1;

    while(continuar != 0){
			while(continuar != 0){
					//while(ELETRO != 0){
						//while(PESSOAS != 0){
							//while(AMBIENTE != 0){
							//while(LOCAL != 0){*/
        system("clear");
				
        printf("Qual região do país você mora ?\n [NORTE | NORDESTE | CENTROESTE] = 1\n [SUL | SUDESTE] = 2\nR:");
scanf("%i", &LOCAL);
  if(LOCAL==1){
    METRAGEM=800;
		ORIGPESSOA=800;
    printf("%.2f BTUS por M²\n", METRAGEM);
    }else
  if(LOCAL==2){
    METRAGEM=600;
		ORIGPESSOA=600;
    printf("%.2f BTUS por M²\n", METRAGEM);
      }else
      if(LOCAL==0 || LOCAL >2){
		    	printf("ERRO, REGIÃO INVÁLIDA\n");
					continuar=1;
					printf("\n\ndigite enter para voltar ao menu...");
__fpurge(stdin);/*limpar buffer linux */
getchar();
			}
						}//while local

  printf("\nQual a metragem do ambiente ? Se não sabe digite 0:\nR: ");
  scanf("%f", &METRAGEM1);
	printf("%.2f M²\n", METRAGEM1);
	METRAGEM=METRAGEM*METRAGEM1;
	printf("%.2fBTUs\n", METRAGEM);

    if(METRAGEM1==0){
      printf ("Insira a largura do ambiente:\nR: ");
      scanf ("%f", &LARGURA);
      printf ("Insira o comprimento do ambiente:\nR: ");
      scanf ("%f", &COMPRIMENTO);
      METRAGEM1 = (LARGURA*COMPRIMENTO);
      printf("%.2f M²\n", METRAGEM1);
      METRAGEM=METRAGEM1*METRAGEM;
      printf("%.2f BTUs\n", METRAGEM);}

      printf("\nQual o ambiente?\nSALA = 1\nQUARTO = 2\nR: ");
      scanf("%i", &AMBIENTE);
        if(AMBIENTE == 1){
        METRAGEM=METRAGEM + 300;
				printf("%.2f BTUs\n", METRAGEM);
				}else 
            if(AMBIENTE == 2){
            METRAGEM=METRAGEM + 100;
						printf("%.2f BTUs\n", METRAGEM);
						}else
							if(AMBIENTE == 0 || AMBIENTE > 2){
								system("cls");
                				printf("ERRO, AMBIENTE INVÁLIDO");
								return 0;}
						//}//while ambiente
			
printf("\nQuantas pessoas vivem nesse ambiente?\nR: ");
scanf("%d", &PESSOAS);
BTUPESSOAS=(PESSOAS*ORIGPESSOA);
printf("%.2d BTUs\n", BTUPESSOAS);
		if(PESSOAS<=0){
			system("cls");
			printf("\nERRO, VALOR INVALIDO\n");
				return 0;}
							//}//while pessoa

				printf("\nQuantos aparelhos eletrônicos?\nR: ");
scanf("%d", &ELETRO);
BTUELETRO=ELETRO*ORIGPESSOA;
printf("%.2d BTUs\n", BTUELETRO);
		if(ELETRO<0){
			system("cls");
			printf("\nERRO, VALOR INVALIDO\n");
				return 0;}
					//}//while eletro

					printf("\nQual o tipo da lâmpada no ambiente?:\nFLUORESCENTE = 1\nNATURAL = 2\nR: ");
					scanf("%d", &TIPOLAMP);
					printf("\nQuantas lâmpadas no ambiente?\nR: ");
					scanf("%i", &LAMP);
						
						if(TIPOLAMP ==1 ){
			TIPOLAMP=100;
			LAMP=LAMP*TIPOLAMP;
			METRAGEM=METRAGEM+LAMP;
			printf("%.2f BTUs\n", METRAGEM);
			
			}else 
				if(TIPOLAMP ==2 ){
					TIPOLAMP=400;
					LAMP=LAMP*TIPOLAMP;
					METRAGEM=METRAGEM+LAMP;
					printf("%.2f BTUs\n", METRAGEM);
				}else{
					system("cls");
					printf("\nERRO, TIPO DE LAMPADA NÃO ENCONTRADO");
				return 0;}
					//}//while tipolamp

				printf("\nHá inicencia do sol no ambiente ?:\n SIM = 1\n NAO = 2\nR:");
				scanf("%d", &SOL);
				if(SOL==1){
					BTUTOTAL=BTUELETRO+BTUPESSOAS+METRAGEM;
				 }else 
					 if(SOL==2){
						 PESSOAS=PESSOAS-1;
						 BTUPESSOAS=(PESSOAS*ORIGPESSOA);
						 BTUTOTAL=BTUELETRO+BTUPESSOAS+METRAGEM;

							printf("%.2f BTUs total\n", BTUTOTAL);

					 }else{
					 	system("cls");
					 	printf("\nERRO, VALOR INVALIDO\n");
				return 0;	}
					//7000, 9000, 12000, 18000, 24000, 27000

				BTUTOTAL = btu_funcao (BTUTOTAL);

        printf("\n\n Deseja continuar? 1 - sim / 0 - nao \nR: ");
        scanf("%i", &continuar);
  
    system("cls");//system("cls")
    printf("Programa finalizado!");
    
	return 0;
}
}//while