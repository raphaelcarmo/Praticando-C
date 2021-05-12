#include <iomanip>
#include <iostream>
using namespace std;

/*  Exercicio pra culcular o salário.
    
    Declarei num e horas como inteiro, salário e horat(horas trabalhadas) como float, pois podem ser números quebrados.
    
    O calculo é simples. salario = horat * horas; 
    
    Depois coloquei pra imprimir o resultado com cout cout << "NUMBER = " << num << endl;
	cout << "SALARY = U$ " << salario << endl;

    Usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
    O "cout.precision(2)" vai imprimir apenas 2 casas após a virgula.


*/

int main() {
	int num,horas;
	float salario,horat;
	
	cin>>num;
	cin>>horas;
	cin>>horat;
	
	salario = horat * horas;
	
	cout <<fixed << showpoint;
	cout <<setprecision(2);
	cout << "NUMBER = " << num << endl;
	cout << "SALARY = U$ " << salario << endl;
	
	
	return 0;
}