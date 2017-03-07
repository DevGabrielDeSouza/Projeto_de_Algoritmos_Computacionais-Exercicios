#include <iostream>
using namespace std;

int main(){
	
	double num1, num2;

	cout << "Insira um número: " <<  endl;
	
	cin >> num1;

	cout << "Insira outro número: " <<  endl;
	
	cin >> num2;
	
	if(num1 >  num2){
		cout << num1 << endl;
	}else{
		cout << num2 << endl;
	}

	return 0;
}
