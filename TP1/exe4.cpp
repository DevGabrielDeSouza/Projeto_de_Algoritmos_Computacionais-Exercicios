#include <iostream>
#include <math.h>

using namespace std;

#define _USE_MATH_DEFINES

int main(){

	cout << "Insira o valor do raio: " << endl;
	
	float R;	

	cin >> R;

	cout << "O valor da área do círculo de raio " << R << " é : " << (2 * M_PI * R) << endl;

	cout << "O valor do volume de uma esfera de raio " << R << " é: " << (M_PI * (R * R)) << endl;
	return 0;
}
