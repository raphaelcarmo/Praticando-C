#include <iostream> /*Cabeçalho que define os objetos de fluxo de entrada / saída padrão*/
using namespace std;

/*  Exercicio Simples 
    Calcular a área do circulo;
    
	Ler 4 números em double.
    
	usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
    O "cout.precision(4)" vai imprimir apenas 4 casas após a virgula.
*/

int main() {
	double n,raio,raio2,area;
	
	
	n = 3.14159;
	
	cin>>raio;
	raio2 = raio * raio;
	
	area = (n * raio2);
	cout << fixed;
	cout.precision(4);
	cout << "A=" << area <<endl;
	
	return 0;
}