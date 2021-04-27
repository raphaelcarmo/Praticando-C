#include <iostream>
using namespace std;

/*  Exercicio Simples 
    Calcular a área do circulo;
    Ler 4 números em double.
    usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
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