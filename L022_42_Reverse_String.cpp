// PALINDROME
// 

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

// Case Sensetive palindrome function
bool palindrome(char a[], int n){
	int s = 0;
	int e = n-1;

	while(s<=e){
	if(a[s] != a[e]){
		return 0;
	}
	else{
		s++;
		e--;
	}
	}
	return 1;
}


// make it not cae sensetive
int solvecase(char ch){
	if(ch >='a' && ch<='z'){
		return ch;
	}
	else{
		char temp = ch - 'A' + 'a';
	}
}

int main()
{
	char name[20];
	cout << "Enter Your Name: ";
	cin >> name; // AyushChaware
	cout << "String: " << name << endl;

	// Length of String
	int len = getlength(name);

	reverse(name, len);
	//Reverse
	cout << "Reversed: " << name << endl;


	// --------PALINDROME----

	//testing case solver function 
	cout<<"Character : "<<solvecase('a')<<endl;
	cout<<"Character : "<<solvecase('A')<<endl;

	// Remove Spaces and symbols
	// cout<<"After removing spaces and Symbols "<<remsys(name)<<endl;
	// palindrome not case Sensotive
	// for(int i =0; i<len; i++){
	// 	name[i]=solvecase(name[i]);
	// }


	// cout<<"is Palindrome: " << palindrome(name,len)<<endl;



	return 0;
}
