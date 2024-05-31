#include<iostream>
using namespace std;

void update(int **p2){
	// checking each step. Wether it will work?
	// p2 = p2+1;
	// *p2 = *p2 + 1;
	**p2 = **p2 + 1;
}
int main(){
	 int i = 5;
	 int *p = &i;
	 int** p2 = &p;

	 cout<<"Add i "<<&i<<endl;
	 cout<<"Add p "<<&p<<endl;
	 cout<<"Add p2 "<<&p2<<endl<<endl;

	 cout<<"value of i "<<i<<endl;
	 cout<<"Add pointed by p "<<p<<endl;
	 cout<<"Add pointed by p2 "<<p2<<endl<<endl;

	 cout<<"value "<<*p<<endl;
	 cout<<"value "<<*p2<<endl; // gives the add stored in *p i.e p or &i
	 cout<<"value "<<**p2<<endl; // gives the value pointed by *p2 (points *p (points i))

	//same
	cout<< &i<< " "<< p<<"  "<<*p2<<endl;
	cout<< &p<<" "<<p2<<endl<<endl;


	//update func
	cout<<"before"<<i<<endl;
	cout<<"before"<<p<<endl;
	cout<<"before"<<p2<<endl;
	update(p2);
	cout<<"After"<<i<<endl;
 	cout<<"After"<<p<<endl;
	cout<<"After"<<p2<<endl;


	 return 0;
}