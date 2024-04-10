#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
	int s =0, e=v.size()-1;
	while(s<=e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}
void print(vector<int> v){
	for(int i =0; i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){

	vector<int> i;
	i.push_back(2);
	i.push_back(7);
	i.push_back(34);
	i.push_back(65);
	i.push_back(6);
	i.push_back(9);

	vector<int> ans = reverse(i);
	print(i);
	print(ans);

}