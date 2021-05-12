#include <iostream>
using namespace std;

/*  Exercicio simples, calcular a diferença entre os números A,B,C,D.
    Criei uma váriavel para receber o valor do produto entre os números.
    Depois coloquei pra imprimir o valor da diferença com a palavra "DIFERENCA"
*/

int main() {
	int num1,num2,num3,num4,Diferenca;
	
	cin>>num1;
	cin>>num2;
	cin>>num3;
	cin>>num4;

	Diferenca = (num1 * num2 - num3 * num4);
	
	cout << "DIFERENCA = " << Diferenca << endl; 
	
	return 0;
}