#include <iostream>
using namespace std;

// length function
int getlength(char name[])
{
	int count = 0;
	for (int i = 0; name[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

// Reverse String
void reverse(char name[], int n)
{
	int s = 0;
	int e = n - 1;
	while (s < e)
	{
		swap(name[s++], name[e--]);
	}
}

int main()
{
	char name[20];
	cout << "Enter Your Name: ";
	cin >> name; // AyushChaware
	cout << "String" << name << endl;

	// Length of String
	int len = getlength(name);

	reverse(name, len);
	//Reverse
	cout << "Reversed: " << name << endl;

	return 0;
}
