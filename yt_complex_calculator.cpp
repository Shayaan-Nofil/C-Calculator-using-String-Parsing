#include <iostream>
#include <string>
using namespace std;

int main() {
	double operand1, operand2;
	char operatorr;
	string expression;

	cout << "Enter the expression: ";
	cin >> expression;

	string temp = "";
	int count = 0, i = 0;

	while (expression[i] >= 48 && expression[i] <= 58 || expression[i] == 46) {
		temp += expression[i];
		i++;
	}

	operand1 = stod(temp);
	operatorr = expression[i];
	temp = "";
	i++;
	
	while (expression[i] != '\n' && i < expression.length()) {
		temp += expression[i];
		i++;
	}
	operand2 = stod(temp);


	switch (operatorr) {
	case '+':
		cout << operand1 << " " << operatorr << " " << operand2 << " = " << operand1 + operand2 << endl;
		break;

	case '-':
		cout << operand1 << " " << operatorr << " " << operand2 << " = " << operand1 - operand2 << endl;
		break;

	case '*':
		cout << operand1 << " " << operatorr << " " << operand2 << " = " << operand1 * operand2 << endl;
		break;

	case '/':
		cout << operand1 << " " << operatorr << " " << operand2 << " = " << operand1 / operand2 << endl;
		break;
	}
}