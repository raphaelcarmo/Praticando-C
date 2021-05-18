#include <stdio.h>

/*
    Exercicio feito em C.

    calcular o consumo médio de um carro.

*/
 
int main() {
 
int dista;
 
float quilo;
 
scanf("%d %f",&dista,&quilo); /*lendo arquivos de entrada*/
 
printf("%.3f km/l\n",dista/quilo);  /*printando resultado na tela*/
 
return 0;
 
}