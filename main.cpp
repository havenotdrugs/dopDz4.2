#include <iostream>
#include <variant>

using namespace std;

void tester(int);
void tester(string);
void tester(char);

int main() {
	int myIntenger = 1;
	string myString = "Hello";
	char myChar = '/';
	tester(myIntenger);
	tester(myString);
	tester(myChar);
	system("pause");
}

void tester(int variable) {
	cout << "INT" << endl;
}
void tester(string variable) {
	cout << "STRING" << endl;
}
void tester(char variable) {
	cout << "CHAR" << endl;
}

