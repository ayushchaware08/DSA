#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string str(5,'n');
	cout<<str<<endl;

	string str1 = "This is Ayush";
	cout<<str1<<endl;
	
	string str3;
	getline(cin, str3);
	cout<<str3<<endl; // count space as string

	string str2;
	cout<<"Enter Str2: ";
	cin>> str2;  //terminate string from space
	cout<<str2<<endl;

	// Append:
    string a1 = "Ayush";
    string a2 = "Chaware";
	cout<<"Append(m1): "<< a1+a2<<endl;
	a1.append(a2);
	cout<<"Append(m2): "<<a1<<endl;

	//access char in string
	cout<<"Access Char: "<<a1[3]<<endl;

	//clear 
	a1.clear();
	cout<<"Clear: "<<a1<<endl;

	// compare
	string s1 = "abc";
	// string s2 = "abc";
	string s2 = "abc";

	if(!s1.compare(s2)){ // means == 0 i.e true
		cout<<"String are equal"<<endl;
	}

	cout<<s2.compare(s1)<<endl;

	// Empty
	if(!s2.empty())  // not empty	
		cout<<"String is not Empty"<<endl;

	// Erase
	string a4 = "ayushgnrghh";
	a4.erase(3,4); // (index to start with, no of index)

	// find
	string a3 = "ayushgnrghh";
	cout<<"Find: "<<a3.find("shg")<<endl;

	// insert
	string a5 = "ayushgnrghh";
	cout<<"Inserted: "<<a5.insert(2,"LOL")<<endl;  //(index, substring to insert)

	// Size/length
	cout<<"Size: "<<a5.size()<<endl;
	cout<<"Size: "<<a5.length()<<endl;

	// iterate trough each ele
	string a6 = "qwertyuiop";
	for(int i =0; i < a6.length(); i++){
		cout<<a6[i]<<endl;
	}

	// string ki substring access
	cout<<"substr: " << a6.substr(6,4)<<endl;  //(index, length)

	// string to integer
	string a7 = "345";
	int x = stoi(a7);  // stoi = string to integer
	cout<<x<<endl;

	// append integer to string (not sum)
	cout<< to_string(x) + "2" << endl;  // o/p= 3452 not 347

	// sorting a string (charector sort)
	// use C++ STL alogorithm ans string
	sort(a6.begin(), a6.end());
	cout<<"Sorted: "<< a6 << endl;

 	return 0;
}
