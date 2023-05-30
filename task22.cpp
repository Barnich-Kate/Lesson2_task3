#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int x, y;
	cout << "Type coordinates x";
	cin >> x;
	cout << "Type coordinates y";
	cin >> y;
	if (x > 0 && y > 0) {
		cout << "I" << endl;
	} else if (x < 0 && y > 0) {
		cout << "II" << endl;
	} else if (x < 0 && y < 0) {
		cout << "III" << endl;
	} else {
		cout << "IV" << endl;
	}
	
	return 0;
}
