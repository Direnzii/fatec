#include <stdio.h>

//Exercício:
//Desenvolver um programa em linguagem C para uma revenda de carro. Onde o programa deve receber o nome do modelo do carro, o preço de venda, o valor da documentação e o valor de desconto que será dado. Ao final, exibir qual o valor total do veículo que o cliente tem que pagar para a revenda de carros.//

main(){
char nome[30];
float preço, doc, desc, total;

printf("Qual modelo do carro?:");
scanf("%s", &nome);
printf("Qual o preço de venda?:");
scanf("%f", &preço);
printf("Qual valor da documentação?:");
scanf("%f", &doc);
printf("Qual será o valor do desconto?:");
scanf("%f", &desc);
total=(preço+doc)-desc;
printf("O modelo: %s\n", nome);
printf("O valor a ser pago será de: %.2f", total);
return 0;}
