// 	C++ STL -> Algorithm
// 			-> Containers

// ================= CONTAINERS =====================
//				 (Sequence Containers)

#include<iostream>
// Standard Tempelate Library
#include<array> //array
#include<vector> // vector
using namespace std;
int main()
{
	// ------------ ARRAY ---------------
	cout<<"ARRAY"<<endl;

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
	cout<<"VECTOR"<<endl<<endl;


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
	cout<<"Element at index 2"<<v.at(2)<<endl;

	// size tell the no of element, capacity tell the spcae alloted to element
	cout<<"Front: "<<v.front()<<endl;
	cout<<"Back: "<<v.back()<<endl;

	// pop ele
	cout<<"Before pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}

	v.pop_back();

	cout<<"After pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	
	// clear {clears ele(size = 0) not space(capacity)}





}
