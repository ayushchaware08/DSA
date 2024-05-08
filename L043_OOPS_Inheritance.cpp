#include <iostream>
using namespace std;

class human{
	public:
	int height;
	int weight;
	int age;

	public:
	int getage(){
		return this->age;
	}
	void setweight(int w){
		this->weight = w;
		cout<<"weight: "<<w<<endl;
	}

};

class male : public human{
	public:
	string color;
	void sleep(){
		cout <<"male sleeping"<<endl;
	}


};

int main(){
	male obj1;

	// parent class object
	cout<<"age: "<<obj1.age<<endl;  // accecing data member form parent class by using child class
	obj1.setweight(23); 
	cout<<"Weight: "<<obj1.weight<<endl; 
	cout<<"Height: "<<obj1.height<<endl;

	// child class object
	cout<<"Color: "<<obj1.color<<endl;
	obj1.sleep(); 





}