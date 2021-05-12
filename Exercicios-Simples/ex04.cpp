#include <iomanip> /*A biblioteca <iomanip> fornece recursos para manipular a formatação de saída, como a base usada ao formatar inteiros e a precisão dos valores de ponto flutuante .*/
#include <iostream> /*Cabeçalho que define os objetos de fluxo de entrada / saída padrão*/
using namespace std;

/* Exercicio simples - tirar a média.
    Ler as notas dos alunos, total = nota * peso. E a média vai ser Media = total /11.
   
    Usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
    O "cout.precision(5)" vai imprimir apenas 5 casas após a virgula.
    declarei todas as variaveis como ponto flutante, ou seja float.
*/

int main() {
	float nota1,nota2,Media,peso1,peso2,total1,total2,total3;
	
	cin>>nota1;
	cin>>nota2;
	
	peso1 = 3.5;
	peso2 = 7.5;
	
	total1 = nota1 * peso1;
	total2 = nota2 * peso2;
	total3 = total1 + total2;
	Media = total3 / 11; 
	
	cout << fixed << showpoint;
    cout << setprecision(5);
	cout << "MEDIA = " << Media << endl; 
	
	return 0;
}