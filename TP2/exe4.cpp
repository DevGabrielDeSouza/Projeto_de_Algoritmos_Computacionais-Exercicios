#include <iostream>
using namespace std;

int main(){
	
	float number;

	cout << "Favor insira um número" << endl;

	cin >> number;

	if(number < 0){
		cout << (number * -1) << endl;
	}else{
		cout << number << endl;
	}
	return 0;
}
