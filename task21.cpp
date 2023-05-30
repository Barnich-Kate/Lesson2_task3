#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int x, y;
	cout << "Type coordinates x";
	cin >> x;
	cout << "Type coordinates y";
	cin >> y;
	if (x == 0 && y == 0) {
		cout << "0" << endl;
	} else if (x > 0 && y == 0) {
		cout << "1" << endl;
	} else if (x == 0 && y > 0) {
		cout << "2" << endl;
	} else {
		cout << "3" << endl;
	}
	
	return 0;
}
