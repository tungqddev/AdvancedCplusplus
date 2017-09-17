#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string inFileName = "test.txt";

	ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open()) {

		string line;

		while (inFile) {
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	}
	else {
		cout << "Cannot open file:  " << inFileName << endl;
	}
	cin.get();
	return 0;
}