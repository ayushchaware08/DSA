// https://www.naukri.com/code360/problems/reverse-the-string_799927

#include<iostream>
#include<string>
using namespace std;

void reversestring(string str, int i){
	//HW
	// hint: n -i -1;
}

void reversestring(int i , int j, string& s){

	cout<< s<<endl; // check each step

	// base case
	if(i>j){
		return;
	}
	swap(s[i], s[j]);
	i++;
	j--;

	// recursive call
	reversestring( i, j, s);

}

int main(){

	string name = "abcde";
	int i =0, j = name.length()-1;
	reversestring(i, j, name);
	cout<<name<<endl;

	return 0;

}
