#include<iostream>
using namespace std;

void update(int n){
	n++; // pass by value
}

void update2(int& n){
	n++;  // pass by reference 
}

// using ref var in return type 
int& func(int a){
	int num =a;
	int & ans = num;
	return ans;

}

int main(){
	int i =5;
	// create a reference Var
	int& j = i;

	cout<<i<<endl;
	i++;
	cout<<i<<endl;
	j++;
	cout<<j<<endl;
	cout<<i<<endl;

	//-----Why?-------
	int n =5;
	cout <<"Before "<<n<<endl;
	update(n);
	cout <<"After "<<n<<endl;

	cout <<"Before "<<n<<endl;
	update2(n);  // reference variable Function
	cout <<"After "<<n<<endl;




	return 0;
}