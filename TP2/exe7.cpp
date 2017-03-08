#include <iostream>
using namespace std;

int main(){
	
	float I, V, Q;
	
	cout << "Insira o número de Inscritos: " << endl;
	cin >> I;

	cout << "Insira o número de votantes: " << endl;
	cin >> V;

	cout << "Insira o valor do Quorum" << endl;
	cin>> Q;

	double P = 100 * (V/I);

	double M = (V/2) + 1;

	return 0;
}
