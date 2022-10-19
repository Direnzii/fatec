#include <stdio.h>
#include <stdlib.h>

float calc_consumo(float q_km, float q_litros){
float consumo;
if(q_km > 0){
if(q_litros > 0){
consumo = q_km / q_litros;
}else{
consumo = -998; /* erro de que a litros é menor ou igual a zero */
}
}else{
consumo = -999; /* erro de que a km é menor ou igual a zero */
}
return consumo;
}

float calc_autonomia(float consumo, float q_litros){
float autonomia;
if(consumo > 0){
if(q_litros > 0){
autonomia = consumo * q_litros;
}else{
autonomia = -998; /*q_litros menor ou igual a zero*/
}
}else{
autonomia = -999; /*consumo menor ou igual a zero*/
}
return autonomia;
}

float calc_tempo(float p_veloc, float p_distancia){
float tempo;
if(p_veloc > 0){
if(p_distancia > 0){
tempo = p_distancia / p_veloc;
}else{
tempo = -999; /*distancia menor ou igual a zero*/
}
}else{
tempo = -999; /*velocidade menor ou igual a zero*/
}
return tempo;
}

int main(){
int op = 1;
float distancia, litros, resultado;
float consumo;
float velocidade;
int horas, minutos;
float fracao;

while(op != 0){

system("clear");
printf("COMPUTADOR DE BORDO DO VEICULO\n\n");
printf("1 - Consumo\n");
printf("2 - Autonomia\n");
printf("3 - Tempo de Viagem\n");
printf("0 - sair\n\n");
printf("Digite a opcao:");
scanf("%i", &op);

if(op == 1){

system("clear");
printf("CONSUMO\n\n");
printf("Digite quantos KM percorreu: ");
scanf("%f", &distancia);
printf("Digite quantos Litros foram gastos para os KM percorrido: ");
scanf("%f", &litros);

resultado = calc_consumo(distancia, litros);

if(resultado > 0){
printf("\n\nO consumo do veiculo = %.2f KM/L", resultado);
}else{
if(resultado == -999){
printf("\n\nNao foi possivel calcular, distancia tem que ser maior que zero");
}else{ /*-998*/
printf("\n\nNao foi possivel calcular, litros tem que ser maior que zero");
}
}
printf("\n\nDigite ENTER para voltar ao inicio...");
__fpurge(stdin);/*limpar buffer linux */
getchar();

}else if(op == 2){

system("clear");
printf("AUTONOMIA\n\n");
printf("\n Digite o consumo medio do veiculo:");
scanf("%f", &consumo);
printf("\n Digite a quantidade de litros restantes no tanque:");
scanf("%f", &litros);

resultado = calc_autonomia(consumo, litros);

if(resultado > 0){
printf("A autonomia = %.2f KM que ainda pode percorrer.", resultado);
}else{
if(resultado == -999){
printf("\n\nNao foi possivel calcular, consumo medio tem que ser maior que zero");
}else if(resultado == -998){
printf("\n\nNao foi possivel calcular, litros restntes no tanque tem que ser maior que zero");
}
}

printf("\n\ndigite enter para voltar ao menu...");
__fpurge(stdin);/*limpar buffer linux */
getchar();

}else if(op == 3){

system("clear");
printf("TEMPO DE VIAGEM\n\n");

printf("\n Digite o velocidade media (km/h):");
scanf("%f", &velocidade);
printf("\n Digite distancia que vai percorrer (km):");
scanf("%f", &distancia);

resultado = calc_tempo(velocidade, distancia);

if(resultado > 0){
printf("A tempo de viagem = %.2f Horas.", resultado);
horas = (int) resultado;
fracao = resultado - horas;
minutos = (int) (fracao * 60);
printf("\nA tempo de viagem %i horas e %i minutos.", horas, minutos);

}else{
if(resultado == -999){
printf("\n\nNao foi possivel calcular, velocidade medio tem que ser maior que zero");
}else if(resultado == -998){
printf("\n\nNao foi possivel calcular, distancia restntes no tanque tem que ser maior que zero");
}
}
printf("\n\ndigite enter para voltar ao menu...");
__fpurge(stdin);/*limpar buffer linux */
getchar();

}else if(op == 0){
system("clear");
printf("sistema encerrado!");

}else{
printf("\n\nOpcao invalida...clique enter para voltar ao menu....");
__fpurge(stdin);/*limpar buffer linux */
getchar();
}

}/*while*/

}/*main*/