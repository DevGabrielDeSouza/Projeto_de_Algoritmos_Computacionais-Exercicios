#include <iostream>
using namespace std;

int main(){
	float x;
	
	float y;
	
	cout << "Insira o valor de X: " << endl;
	cin >> x;

	if(x > 0){
		y = 10/x + (x*x);
	}else if (x <= 0) {
		y = (x*x);
	}

	cout << "O valor de Y é: " << y << endl;
	
	return 0;
}
