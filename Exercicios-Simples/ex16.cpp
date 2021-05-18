/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B. 

Usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
    O "cout.precision(2)" vai imprimir apenas 2 casas após a virgula.

*/

#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c;
 
    scanf("%lf %lf %lf", &a, &b, &c);  /*leitura dos dados de entrada*/
 
    printf("TRIANGULO: %.3lf\n", a * c / 2.0);
    printf("CIRCULO: %.3lf\n", 3.14159 * pow(c, 2.0));
    printf("TRAPEZIO: %.3lf\n", (a + b) * c / 2.0);
    printf("QUADRADO: %.3lf\n", b * b);
    printf("RETANGULO: %.3lf\n", a * b);
}