#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
	char op;
	double numb1;
	double numb2;
	float result = 0;
	cout<< "**************CALCULATOR***************"<< endl;;
	cin>> op ;
	cin >> numb1;
	cin>> numb2;
	switch(op){
		case '+':
			result = numb1 + numb2;
			cout << result;
			break;
		case '-':
			result = numb1 - numb2;
			cout << result;
			break;
		case '*':
			result = numb1 * numb2;
			cout << result;
			break;
		case '/':
			result = numb1 / numb2;
			cout << result;
			break;
		default:{
			cout<<"error" << endl;
			break;
		}
	}
	cout << "*************************************" << endl;
	return 0;
}