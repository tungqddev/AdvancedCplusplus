#include "Complex.h"
#include <iostream>


using namespace std;
using namespace caveofprogramming;

int main() {
	Complex c1(3, 4);
	Complex c2(2, 3);

	Complex c3 = c1 + c2;

	cout << c1 << endl;

	cout << c1 + c2 + c3<< endl;

	Complex c4(4, 2);
	Complex c5 = c4 + 7;
	cout << c5 << endl;

	cout << 6 + c1 + c2 + 7 + c5 + 3 << endl;

	cin.get();
	return 0;
}
