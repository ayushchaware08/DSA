// ================= CONTAINERS =====================
//				 (ASSOCIATIVE CONTAINERS)

#include<iostream>
#include<set> // sets
#include<map> //map
using namespace std;
int main(){
	// ------------------- Sets ------------------
	// print unique element in sorted manner
	cout<<endl<<endl<<"SETS"<<endl;

	set<int> sets;
	sets.insert(5);
	sets.insert(4);
	sets.insert(6);
	sets.insert(5);
	sets.insert(5);
	sets.insert(4);
	sets.insert(2);

	for(int i:sets){
		cout<<i<<" ";
	}cout<<endl;

	set<int> :: iterator it = sets.begin();
	it++; // index 1
	sets.erase(it); //i.e 4

	for(int i:sets){
		cout<<i<<" ";
	}cout<<endl;

	cout<<"5 is present or not-> "<<sets.count(5)<<endl;
	
	// set<int>::iterator itr= sets.find(5);
	// for(int it =itr; it!= sets.end();it++){ // 5 ke agge jo bhi hai
	// 	cout<<*it<<" ";
	// }cout<<endl;

	// ---------------- map ---------------
	map<int,string> s;

	s[1]="Ayush";
	s[2]="Chaware";
	s[13]="Google";
	s.insert({5,"CodeHelp"});
	for(auto i:s){
		cout<<i.first<<i.second<<endl;
	}

	cout<<"Find 13-> " <<s.count(13)<<endl;
	cout<<"Find -13-> " <<s.count(-13)<<endl;

	s.erase(13);
	cout<<"after Erase"<<endl;
	for(auto i:s){
		cout<<i.first<<i.second<<endl;
	}
	//  auto it = s.find(5);
	//  for(auto i =it;i!=m.end();i++){
	// 	cout<<(*i).first<<endl;
	//  }

	
}