#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

	// Binary search
	vector<int> v;
	
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);

	cout<<"Search ele 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;

	cout<<"Lower Bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
	cout<<"Upper Bound-> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

	int a=3;
	int b =4;
	cout<<"max->"<<max(a,b)<<endl;
	cout<<"min->"<<min(a,b)<<endl;
	swap(a,b);
	cout<<"swap->"<<a<<endl;

	//Reverse
	string abcd = "abcd";
	reverse(abcd.begin(),abcd.end());
	cout<<"string->"<<abcd<<endl;

	// Rotate
	rotate(v.begin(),v.begin()+1,v.end());
	cout<"After Rotate->";
	for(int i:v){
		cout<<j<<" ";
	}cout<<endl;

	//sort
	// introsort heap quick insertion sort BTS

}