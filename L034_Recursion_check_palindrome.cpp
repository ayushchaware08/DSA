#include<iostream>
using namespace std;

bool ispalindrome(string& str, int i, int j){

if(i>j)
	return true;
if(str[i] != str[j])
	return false;
else	
	return ispalindrome(str, i+1, j-1);
}

int main(){
	string name = "bookkoob";
	cout<<endl;

	bool checkpalindrome = ispalindrome(name, 0, name.length()-1);
	if(checkpalindrome){
		cout<<"Yes, it is palindrome :)"<< endl;
	}
	else{
		cout<<"No, it's not a palindrome ;("<<endl;
	}
}
