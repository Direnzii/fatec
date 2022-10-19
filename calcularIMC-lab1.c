#include <stdio.h>

/*Exercício:/Receber o nome da pessoa e pedir os dados necessário para calcular o IMC.
Ao final exiba o nome da pessoa e indique qual o valor de IMC foi obtido.
Fórmula para calcular o IMC, abaixo:
O IMC é a relação entre peso e altura e o cálculo é feito de acordo com a fórmula: IMC = peso/ (altura x altura), devendo o peso estar em kg e a altura em metro, e o resultado é dado em kg/m2
	IMC=PESO/(ALTURA*ALTURA);
Exibir: Magreza
caso: quando o resultado é menor que 18,5 kg/m2;
Exibir:Normal
caso: quando o resultado está entre 18,5 e 24,9 kg/m2;
Exibir: Sobrepeso
caso: quando o resultado está entre 24,9 e 30 kg/m2;
Exibir:Obesidade
caso: quando o resultado é maior que 30 kg/m2.*/

int main(){
	char NOME[30];
	float PESO, ALTURA, IMC;
	printf("Qual seu nome?: ");
	scanf("%s", NOME);
printf("Insira seu peso: ");
scanf("%f", &PESO);
if (PESO<=0){
	printf("\nERRO, VALOR INVALIDO!!\n");
	return 0;
}
printf("Insira sua altura: ");
scanf("%f", &ALTURA);
if (ALTURA<=0){
	printf("\nERRO, VALOR INVALIDO!!\n");
	return 0;
}
IMC=PESO/(ALTURA*ALTURA);

if(IMC>=24.9 && IMC<30){
		printf("SOBREPESO, %s SEU IMC = %.2f", NOME, IMC);
			}else
				if(IMC>=18.5 && IMC<24.9){
					printf("NORMAL, %s SEU IMC = %.2f", NOME, IMC);
						}else
							if(IMC<18.5){
									printf("MAGREZA, %s SEU IMC = %.2f", NOME, IMC);
										}else
											printf("OBESIDADE, %s seu IMC = %.2f", NOME, IMC);
													

return 0;}