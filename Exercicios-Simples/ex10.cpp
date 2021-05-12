#include <iostream> /*Cabeçalho que define os objetos de fluxo de entrada / saída padrão*/
#include <iomanip> /*A biblioteca <iomanip> fornece recursos para manipular a formatação de saída, como a base usada ao formatar inteiros e a precisão dos valores de ponto flutuante .*/
using namespace std;

/*  Este exercicio, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Declarei como inteiro as variáveis, codigo,quantidade,quantidade2,codigo2.
Declarei como float as variáveis, valor,valor2,pagar1,pagar2,valor3.

Se a quantidade de peças for maior que 1, segue a condição do if, se não vai pro else que tem outra condição.

Usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
    O "cout.precision(2)" vai imprimir apenas 2 casas após a virgula.

*/

int main() {
	int codigo,quantidade,quantidade2,codigo2;
	float valor,valor2,pagar1,pagar2,valor3;
	
	
	cin>>codigo>>quantidade>>valor;
	cin>>codigo2>>quantidade2>>valor2;
	
	if (quantidade > 1){
		pagar1 = quantidade * valor; 		
	} 
	else{
		pagar1 = quantidade * valor;
	}
	
	if (quantidade2 > 1){
		pagar2 = quantidade2 * valor2;
	} 
	else{
		pagar2 = quantidade * valor;
	}
	
	valor3 = pagar1 + pagar2;
	

	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << valor3 << endl;
	return 0;
}