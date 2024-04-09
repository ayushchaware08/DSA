// 	C++ STL -> Algorithm
// 			-> Containers

// ================= CONTAINERS =====================
//				 (Sequence Containers)

#include<iostream>
// Standard Tempelate Library
#include<array> //array
#include<vector> // vector
#include <deque> // Deque
#include<list> //LIST
using namespace std;

int main()
{
	// ------------ ARRAY ---------------
	cout<<endl<<endl<<"ARRAY"<<endl;

	// Basic array
	int arr[5]= {2,3,6,4,5};

	// STL
	//array<type,size>
	array<int,4> a = {4,5,3,6};
	int size = a.size();
	cout<<"STL arr size: "<<size<<endl;
	for(int i =0; i<size; i++){
		cout<<a[i];
	}
	cout<<"Element at 2nd Index: "<<a.at(2)<<endl;
	cout<<"Empty or not: "<<a.empty()<<endl;  // o/p bool
	cout<<"First element: "<<a.front()<<endl;
	cout<<"last element: "<<a.back()<<endl;

	// ------------- VECTOR ---------------
	cout<<endl<<endl<<"VECTOR"<<endl;


	// vector var <size,initilize>
	vector<int> b(5,1);
	for(int i:b){
		cout<< i<<" ";
	}cout<<endl;

	//to copy last vector in new vector
	vector<int> last(b);
	for(int i:last){
		cout<< i<<" ";
	}cout<<endl;

	vector<int> v;  //default 0 Capacity
	cout<<endl<<"Capacity: "<<v.capacity()<<endl;
	//add ele
	v.push_back(1);
	cout<<"Capacity: "<<v.capacity()<<endl;

	v.push_back(2);
	cout<<"Capicity: "<<v.capacity()<<endl;

	v.push_back(3);
	cout<<"Capacity: "<<v.capacity()<<endl; // doubles its Capacity prv 2 ele 3 then doubles the Capacity to 4
	
	v.push_back(4);
	cout<<"Capacity: "<<v.capacity()<<endl; 
	
	v.push_back(5);
	cout<<"Capacity: "<<v.capacity()<<endl; // Doubles the Capacity as ele exceeds the Capacity

	//size
	cout<<"Size -> "<<v.size()<<endl; 
	// size tell the no of element, capacity tell the spcae alloted to element

	cout<<"Element at index 2: "<<v.at(2)<<endl;
	cout<<"Front: "<<v.front()<<endl;
	cout<<"Back: "<<v.back()<<endl;

	// pop ele
	cout<<"Before pop: ";
	for(int i:v){
		cout<<i<<" ";
	}

	v.pop_back();

	cout<<endl<<"After pop: ";
	for(int i:v){
		cout<<i<<" ";
	}
	
	// clear {clears ele(size = 0) not space(capacity)}

	//  --------------- Deque -------------
	cout<<endl<<endl<<"DEQUE"<<endl;

	deque<int>d;
	d.push_back(3);
	d.push_back(4);
	d.push_front(2);
	d.push_front(1);

	for(int i:d){
		cout<<i<<" ";
	}cout<<endl;

	// d.pop_front();
	d.pop_back();
	for(int i :d){
		cout<<i<<" ";
	}cout<<endl;

	cout<<"Element at index 0: "<<d.at(0)<<endl;
	cout<<"Front: "<<d.front()<<endl;
	cout<<"Back: "<<d.back()<<endl;
	cout<<"Empty or not: "<<d.empty()<<endl; //bool

	cout<<"Size before Erase: "<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1); //need to mention from where to where we have to erase (here we erase 1st ele)
	cout<<"Size after Erase: "<<d.size()<<endl;

	// -------------------- List -------------------
	cout<<endl<<endl<<"LIST"<<endl;

	list<int> n(5,100);
	for(int i:n){
		cout<<i<<" ";
	}cout<<endl;

	//copy above list
	list<int> n1(n);
	for(int i:n){
		cout<<i<<" ";
	}cout<<endl;

	list<int> l;  //empty list
	for(int i:l){
		cout<<i<<" ";
	}cout<<endl;

	l.push_back(1);
	l.push_front(2);
	for(int i:l){
		cout<<i<<" ";
	}cout<<endl;

	l.erase(l.begin());
	cout<<"after earse: ";
	for(int i:b){
		cout<<i<<" ";
	}cout<<endl;

	// cout<<"Element at index 0: "<<l.at(1)<<endl;
	cout<<"Front: "<<l.front()<<endl;
	cout<<"Back: "<<l.back()<<endl;
	cout<<"Empty or not: "<<l.empty()<<endl; //bool


}
