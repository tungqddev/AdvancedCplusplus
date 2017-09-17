#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main() {
	string filename = "start.txt";
	ifstream input;
	input.open(filename);
	if (!input.is_open()) {
		return 1;
	}

	while (input) {
		string line;
		
		std::getline(input, line, ':');
		int population;
		input >> population;

		cout << "'" << line << "'" << " -- " << population << endl;
	}
	input.close();
	cin.get();
}