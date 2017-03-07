#include <iostream>
using namespace std;

int main(){
	
	char car1, car2, car3, carTemp;
	
	cout << "Insira o primeiro caractere: " << endl;
	
	cin >> car1;

	cout << "Insira o segundo caractere: " << endl;
	
	cin >> car2;

	cout << "Insira o terceiro caractere: " << endl;
	
	cin >> car3;

	carTemp = car1;

	car1 = car2;
	car2 = car3;
	car3 = carTemp;

	cout << "O novo primeior caractere é: " << car1 << endl;
	cout << "O novo segundo caractere é: " << car2 << endl;
	cout << "O novo terceiro caractere é: " << car3 << endl;

	return 0;
}
