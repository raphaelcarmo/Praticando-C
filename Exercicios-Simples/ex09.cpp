#include <iostream> /*Cabeçalho que define os objetos de fluxo de entrada / saída padrão*/
using namespace std;

/*  Exercicio simples.

    Para saber se um número é par, basta dividir o número por 2, se o resto for 0 ele é par, nesse caso queremos saber quantos números pares temos, por isso na condição do if temos valor = valor+1.

*/

int main() {
	int num1,num2,num3,num4,num5;
	int valor = 0;
	
	cin>>num1>>num2>>num3>>num4>>num5;
	
	if(num1 % 2 == 0){
		valor = valor+1;
	}
	
	if(num2 % 2 == 0){
		valor = valor+1;
	}
	
	if(num3 % 2 == 0){
		valor = valor+1;
	}
	
	if(num4 % 2 == 0){
		valor = valor+1;
	}
	
	if(num5 % 2 == 0){
		valor = valor+1;
	}
	
	cout << valor << " valores pares" << endl;
	return 0;
}