#include <iostream>
using namespace std;

int main(){
	
	double r1, r2, r3;

	int type;

	cout << "Insira uma resistência: " <<  endl;
	
	cin >> r1;

	cout << "Insira uma segunda resistência: " <<  endl;
	
	cin >> r2;

	cout << "Insira uma terceira resistência: " <<  endl;
	
	cin >> r3;
	
	cout << "Informe o tipo da resistência" << endl;
	
	cout << "Insira 1 para Paralela ou 2 para em Série: ";

	cin >> type;

	if(type == 1){
		cout << "A resistência equivalent é: " << ((r1 * r2 * r3 )/(r1 * r2 + r1 * r3 + r2 * r3)) << endl;
	}else if (type == 2){
		cout << "A resistência equivalent é: " << (r1 + r2 + r3) << endl;
	}
	
	return 0;
}
