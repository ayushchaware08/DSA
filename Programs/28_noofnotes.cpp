// you have Rs. 1330 calculate how many notes of 100, 50, 20, 10, 2, 1 requiredd
#include <iostream>
using namespace std;
int main()
{
	int amt;
	cout<< "Enter the amount you have: ";
	cin>> amt;

	int num=1;
	switch(num)
	{
		case 1:
			cout << "Required Rs. 500 notes: ";
			cout<< amt/500<<endl;
			amt %= 500;
		case 7:
			cout << "Required Rs. 100 notes: ";
			cout<< amt/100<<endl;
			amt %= 100;
		case 2:
			cout << "Required Rs. 50 notes: ";
			cout<< amt/50<<endl;
			amt %= 50;
		case 3:
			cout << "Required Rs. 20 notes: ";
			cout<< amt/20<<endl;
			amt %= 20;
		case 4:
			cout << "Required Rs. 10 notes: ";
			cout<< amt/10<<endl;
			amt %= 10;
		case 5:
			cout << "Required Rs. 2 notes: ";
			cout<< amt/2<<endl;
			amt %= 2;
		case 6:
			cout << "Required Rs. 1 notes: ";
			cout<< amt/1<<endl;
			amt %= 1;
		default:
			break;
	}



}