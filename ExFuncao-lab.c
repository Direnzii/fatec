#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float inss_funcao (float salario){
	float inss;
 if(salario==0){
	 inss=-999;
 }else if (salario<0){
	 inss=-998;
 }else if(salario<=1100.01){
		inss = (salario /100)* 7.5;
	}else if(salario>1100.01 && salario<= 2203.45){
		inss = (salario /100)* 9;
	}else if(salario>2203.45 && salario<= 3305.22){
		inss = (salario /100)* 12;
	}else if(salario>3305.22 && salario<= 6433.57){
		inss = (salario /100)* 14;
	}else if(salario>6433.57){
		inss = 900.70;}
return inss;
}

int main(){

float salario, inss, retorno;
char nome[30];
int cont=1;

while(cont != 0){
	system("clear");
printf("Qual o nome?: ");
scanf("%s", &nome);
printf("Insira seu salario:");
scanf("%f", &salario);
retorno = inss_funcao (salario);
if(retorno == -999){
printf("Erro valor de salario igual a ZERO");
}else if(retorno == -998){
printf("Erro valor de salario menor que ZERO");
}else{
printf("%s com base no salario %.2f o valor a ser pago: %.2f\n", nome, salario, retorno);
}
printf("Deseja continuar?\nSIM=1\nNAO=0\n");
scanf("%i", &cont);
if(cont != 0 && cont != 1){
	printf("ERRO PROGRAMA FINALIZADO!!!");
	return 0;
} else if (cont == 0){
	printf("OBRIGADO POR ULTILIZAR O PROGRAMA!!");
}
} /*while*/
return 0;}

/*Exercício (valendo 1 ponto na nota da P1):
Fazer uma função que receba o salário bruto do funcionário e retorne o valor do inss que ele deve pagar.

Seguir a tabela abaixo:
Até um salário mínimo (R$ 1.100) 7,5%
A partir de R$ 1.100,01 até R$ 2.203,45 9%
A partir de R$ 2.203,49 até R$ 3.305,22 12%
A partir de R$ 3.305,23 até R$ 6.433,57 14%
Acima de R$ 6.433,57 o inss terá valor de R$ 900,70

- Lembrar de de testar restrições.
- salário igual a zero retornar -999.
- salário < zero retornar -998.
- valores em programas cada decimal é o ponto e não a virgula. 3.305,22 -> 3305.22
- Programas usam valores, então não tem R$.
- fazer um main para testar a sua função.*/