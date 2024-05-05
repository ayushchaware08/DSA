#include<iostream>
#include <string.h>
using namespace std;

class hero{
	private: 
	int pswd;

	public:
	int length;
	char level;
	char *name;

	hero(){
		cout<<"Shallow copy or Default constructor copy"<<endl;
		name = new char[100];
	}
	void setname(char name[]){
		strcpy(this->name, name);
	}

	int getpswd(){   //getter
		return pswd;
	}
	int setpswd(int r){  //setter
		pswd = r;
	}


	int getlength(){    //getter
		return length;
	}
	void setlength(char ln){    //setter
		length = ln;
	}
	

	char getlevel(){     //getter
		return level;
	}
	
	void setlevel(char ch){     //setter
		level = ch;
	}

	// Default Constructor
	// hero{
	// 	cout<<"Default Constructor-> "<<endl;
	// }

	//parameterized constructor
	hero(int pswd){
	 	cout<<"This-> " <<this<<endl;
	 	this->pswd = pswd; 
	 }

    hero(int h, char l, int p){
	 	length = h;
	 	level = l;
		pswd = p;
	 }

	//your own copy Constructor
	hero(hero &temp){  // & -> pass bt reference
		cout<< "Copy Constructor Called"<<endl;
		this->length = temp.length;
		this->level = temp.level;

		//deep copy
		cout<<"Deep Copy"<<endl;
		char *ch = new char[strlen(temp.name)+1];
		strcpy(ch, temp.name);
		this -> name = ch; 
	 }


	void print(){
		cout<<"{ Name: "<<name<<" }"<<",";
		cout<<" Length: "<<length<<",";
		cout<<" level: "<<level<<",";
		cout<<" pswd: "<<pswd<<" }";
		cout<<endl<<endl;

	}

	// move constructor 
	hero(hero&& other) noexcept
    {
        cout << "Move Constructor Called" << endl;
 
        length = other.length; 
        // other.length = nullptr; 
    }

	// Destuctor
	~hero(){
		cout<<" Destructor Initiated"<<endl;
	}  // for each class hero called the destructor is called
	// static alloc -> automatic destuction 
	// dnamic alloc -> manually destruction (delete hero)


};

int main()
{
	// hero ramu;
	// cout<<"Len: "<<sizeof(ramu)<<endl;

	// //static allocation
	// hero h;
	// h.length = 20;
	// h.setlevel('A');
	// cout<< "length is "<<h.length<<endl;
	// cout<< "level is "<<h.level<<endl;

	// // dynamic allocation
	// hero *b = new hero;
	// b->setlevel('B');
	// b->length = 3;
	// cout<< "level is "<<(*b).level<<endl;
	// cout<< "length is "<<(*b).length<<endl;

	// parameterized constructor
	// hero ramesh(10);
	// cout<<" Address of ramesh -> "<<&ramesh <<endl; //get same address as 'this' in class hero object
	// ramesh.getlevel();
	
	// copy constructor
	// hero suresh;
	hero suresh (70, 'C', 345);  // constructor suresh.hero(int h, char l, int p) is called
	// suresh.setpswd(70);
	// suresh.setlevel('C');
	// suresh.setlength(70);
	cout<<"suresh length ->"<<suresh.length<<endl;

	hero ritesh(suresh); // coopy constructor that mean suresh.health=ritesh.health, so on...
	cout<<"Ritesh Length ->"<<ritesh.length<<endl; 
	// by calling you own copy constructor (pass by reference)


	// shallow and deep copy (comment you own copy contructor)
	hero hero1(90, 'F',34);
	char name[8]="Ayush";
	hero1.setname(name);
	hero1.print();

	hero hero2(hero1); //default constructor that one 
	hero2.print();

	hero1.name[0] ='a';
	hero1.print();
	hero2.print();  // default copy used shallow copy 


	// Copy assigment operator
	// hero1 = hero2;
	hero1.print();
	hero2.print();

	// move Constructor
	hero hero4(42, 'M',12);
	hero hero3(move(hero1));
	hero3.print();


	
}
