#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

class Test {
private: 
	string name;

public:
	Test(string name) : name(name) {

	}
	~Test() {
		//cout << "Object destroyed " << endl;
	}

	void print() {
		cout << name << endl;
	}
};

int main() {
	//LIFO

	queue<Test> testQueue;
	
	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	cout << endl;

	//This is invalid code! Object is destroyed.
	//Test &test1 = testStack.top();
	//testStack.pop();
	//test1.print();  //Reference refers to destroyed objects
	testQueue.back().print();
	while (testQueue.size() > 0) {
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}
	cin.get();
	return 0;
}