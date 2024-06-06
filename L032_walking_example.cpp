// Ek ek Kadam aage badhao

#include<iostream>
using namespace std;

void reachhome(int src, int dest){
	cout<<"src: "<<src<<" dest: "<<dest<<endl;

	// base case
	if (src == dest){
		cout<< "I reached :)" <<endl;
		return ;
	}

	// processsing
	src++;

	// Recursive Relation
	reachhome(src, dest);
}

int main(){
	int src= 1, dest = 10;
	// cin>> src;
	// cin>> dest;

	reachhome (src, dest);


}