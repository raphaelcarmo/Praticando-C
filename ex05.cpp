#include <iomanip> /*A biblioteca <iomanip> fornece recursos para manipular a formatação de saída, como a base usada ao formatar inteiros e a precisão dos valores de ponto flutuante .*/
#include <iostream> /*Cabeçalho que define os objetos de fluxo de entrada / saída padrão*/
using namespace std;

/* Exercicio de Média 2.
    Neste  exercicio é pra calcular a média, ler a media, multiplica pelo peso. neste aqui temos 3 médias, para calcular, mas o processo é o mesmo.
   
    O "cout.precision(1)" vai imprimir apenas 1 casas após a virgula.
    desta vez eu declarei todas as variáveis como double para ter um precisão melhor.

*/

int main() {
	double nota1,nota2,nota3,Media,peso1,peso2,peso3,total1,total2,total3,total4;
	
	cin>>nota1;
	cin>>nota2;
	cin>>nota3;
	
	peso1 = 2;
	peso2 = 3;
	peso3 = 5;
	
	total1 = nota1 * peso1;
	total2 = nota2 * peso2;
	total3 = nota3 * peso3;
	total4 = total1 + total2 + total3;
	
	Media = total4 / 10; 
	
	cout << fixed << showpoint;
    cout << setprecision(1);
	cout << "MEDIA = " << Media << endl; 
	
	return 0;
}