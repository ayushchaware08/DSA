// Build a mini calculaotr peforming an operation + - * / %
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a : ";
	int a;
	cin >> a;
	cout << "Enter b : ";
	int b;
	cin >> b;

	char ch;
	cout << "Enter the operation you have to perform: ";
	cin >> ch;

	int ans;
	switch (ch)
	{
	case '+':
		cout <<a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout <<a * b;
		break;
	case '/':
		cout << a / b;
		break;
	case '%':
		cout << a % b;
		break;
	default:
		cout << "Invalid case";
		break;
	}
}