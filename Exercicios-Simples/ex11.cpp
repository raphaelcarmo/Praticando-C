#include <iostream>
#include <iomanip>
using namespace std;

/*
 Declarei raio e volume como double, pq os valores so resultado vão ser grandes.
Calcular o raio e o volume:

    raio = raio * raio * raio;
	
	volume = (4.0/3.0) * 3.14159 * raio;

Usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
    O "cout.precision(3)" vai imprimir apenas 2 casas após a virgula.
*/


int main() {
	double raio,volume;
	float pi = 3.14159;
	
	cin>>raio;
	raio = raio * raio * raio;
	
	volume = (4.0/3.0) * 3.14159 * raio;
	
	cout << fixed << showpoint;
	cout << setprecision(3);
	cout << "VOLUME = " << volume << endl;
	return 0;
}