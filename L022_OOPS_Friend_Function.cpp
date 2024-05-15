#include<iostream>
using namespace std;

class complex{
	int a ,b ;
	public:

	// make subclass you friend (give subclass permission to be my friend)
	friend complex sumcomplex(complex o1, complex o2);
	void setnumber(int n1, int n2){
		a = n1;
		b = n2;
	}
	void printnumber(){
		cout<<"Your Number is : "<<a <<" + "<<b<<"i"<<endl;
	}
};

complex sumcomplex(complex o1, complex o2){
	complex o3;
	o3.setnumber((o1.a + o2.a),(o1.b + o2.b));
	
};


int main(){
	complex c1, c2, sum;

	c1.setnumber(1,4);
	c2.setnumber(5,8);
	
	c1.printnumber();
	c2.printnumber();

	sum = sumcomplex(c1,c2);
	sum.printnumber();


	return 0;
}
/*
Properties
1. not in the scope of class
2. since it is not in the scope, it os not called from that object of that class c1.sumclass() = invalid
3. can be invoked without the help of any object
4. can be in public or private access modifires
5. it can't access the members directly by their names and need object_name.member_name to access any member
like cout<<a in friend function
*/
