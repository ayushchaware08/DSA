#include<iostream>
using namespace std;
class student{
	private:
	string name;
	int age;
	int height;

	public:
	student(string name, int age, int height){
		this->name = name;
		this->age = age;
		this->height = height;
	}
	
	int setage(int age){
		this->age = age;
	}
	void setname(string name){ // Change the return type to string
		this->name = name;
	}
	int getheight(){
		this->height = height;
	}
	void print(){
		cout<<name<<height<<age<<endl;
	}

};

int main(){
	student s1("ayush", 12, 123);
	s1.print();
}