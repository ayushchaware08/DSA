
#include <iostream>
using namespace std;
class base{
	protected:
	int a;
	private:
	int b;


};	
 
/*
				Public derivation 		private Derivation 		Protected derivation
private			not inherited			not inherited			not inherited
protected 		protected				private					protected
pubic			public					private					protected
*/

class derived : protected base{

};

int main(){
	base b;
	derived d;
	cout<<b.a; // cant access as in protected
	cout<<b.a;
	return 0;

}