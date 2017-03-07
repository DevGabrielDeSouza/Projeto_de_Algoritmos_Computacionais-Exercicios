#include <iostream>
using namespace std;

int main(){
	
	int number;

	cout << "Insira um número: " << endl;
	
	cin >> number;

	if(number % 2 == 0){
		cout << "Seu número é PAR!" << endl;
	}else{
		cout << "Seu número é ÍMPAR!" << endl;
	}

	return 0;
}
