#include <iostream>
#include <stdlib.h>
using namespace std;


/*
    Neste exercicio tem que dizer o número maior.

    Utilizando a fórmula (a+ b + abs(a-b))/2. é possivel calcular o maior entre a ou b.

    Para saber o maior entre a, b ou c. usamos outra fórmula. maior2 = (maior1 + c + abs(maior1-c))/2;

*/

int main() {
	
	int a,b,c,maior1,maior2;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	maior1 = (a+ b + abs(a-b))/2;
	
	maior2 = (maior1 + c + abs(maior1-c))/2;
	
	
	cout << maior2 << " eh o maior" << endl;   /*imprime na tela*/
	return 0;
}