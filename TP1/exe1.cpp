#include <iostream>

using namespace std;

#define PI 3.14159

int main(){
	int r;
	cout << "Informe o valor do raio do seu círculo!" << endl;
	cin >> r;
	cout << "Seu raio é: " << r << endl;

	double p = 2 * PI * r;
	double s = PI * r * r;
	
	cout << "O círculo de raio r" <<  endl;
	cout << "Tem um perímetro " << p << " e uma área " << s << endl;
	
	return 0;
}
