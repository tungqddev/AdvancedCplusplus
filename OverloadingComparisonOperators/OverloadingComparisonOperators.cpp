#include <iostream>
#include "complex.h"
using namespace std;
using namespace caveofprogramming;
int main() {
	Complex c1(4, 5);
	Complex c2(3, 2);

	if (c1 == c2) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not equal" << endl;
	}
	
	cin.get();
	return 0;
}