#include <iomanip>  /*A biblioteca <iomanip> fornece recursos para manipular a formatação de saída, como a base usada ao formatar inteiros e a precisão dos valores de ponto flutuante .*/
#include <iostream> /*Cabeçalho que define os objetos de fluxo de entrada / saída padrão*/
using namespace std;


/*  Exercicio Salário com Bônus.

    Declarei nome como char, pois esta lendo caracteres.
    Declarei salario, vendas, total e comissao como double para ter mais precisão.

    Calcular a comissão é simples. comissar = vendas 15 / 100. A comissão é de 15%, por isso multiplica com 15.

    E o salário final vai ser, total = comissao + salario;

     Usei "fixed" pra limitar o número de casas após o ponto, quando o número é ponto flutuante
    O "cout.precision(2)" vai imprimir apenas 2 casas após a virgula.

*/

int main() {
	double salario,vendas,total,comissao;
	char nome[30]; 
	
	cin>>nome;
	cin>>salario;
	cin>>vendas;
	
	comissao = vendas * 15 / 100;
	total = comissao + salario;
	
	
	cout <<fixed << showpoint;
	cout <<setprecision(2);
	cout << "TOTAL = R$ " << total << endl;
	
	
	return 0;
}