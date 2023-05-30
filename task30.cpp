#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int number;
	cout << "Type random number from 1 to 999:  ";
	cin >> number;
	if (number <= 1 && number < 10 && number % 2 == 0) {
		cout << "It is unique even number" << endl;
	} else if (number <= 1 && number < 10 && number % 2 != 0 ) {
		cout << "It is unique not even number";
	} else if (number <= 10 && number < 100 && number % 2 == 0) {
		cout << "It is even two-digit number" << endl;
	} else if (number <= 10 && number < 100 && number % 2 != 0) {
		cout << "It is  not even two-digit number" << endl;
	} else if (number >= 100 && number <= 999 && number % 2 == 0 ) {
		cout << "It is even three-digit number" << endl;
	} else if (number >= 100 && number <= 999 && number % 2 != 0) {
		cout << "It is not even three-digit number" << endl;
	}
}
    
