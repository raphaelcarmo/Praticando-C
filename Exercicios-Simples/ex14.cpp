#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

/*
Tive que usar a função sqrt da bliblioteca math.h. 
    a função sqrt calcula a raiz quadrada.

Usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
    O "cout.precision(4)" vai imprimir apenas 2 casas após a virgula.
*/

int main() {
	
	float y1,y2,x1,x2,total;
	
	cin>>x1;
	cin>>y1;
	cin>>x2;
	cin>>y2;
	
	total = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	
	cout << fixed << showpoint; 
	cout << setprecision(4); 
	cout << total << endl;
	return 0;
}