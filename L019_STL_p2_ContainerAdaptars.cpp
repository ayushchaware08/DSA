// ================= CONTAINERS =====================
//				 (CONTAINERS ADAPTERS)

#include<iostream>
#include<stack> //stack
#include<queue> //queue and priority_queue
using namespace std;

int main(){

	// ------------------ Stack ---------------
	// LIFO
	stack<string> s;
	s.push("Ayush");
	s.push("Sanjay");
	s.push("Chaware");
	cout<<"Top Element-> "<<s.top()<<endl;

	s.pop();
	cout<<"Top Element-> "<<s.top()<<endl;
	cout<<"size of stack-> "<<s.size()<<endl;
	cout<<"Empty or not-> "<<s.empty()<<endl;

	// ----------------- Queue (FIFO) --------------
	cout<<endl<<endl<<"QUEUE"<<endl;

	queue<string> q;
	q.push("AYush");
	q.push("Sanjay");
	q.push("Chaware");

	cout<<"FirstElement-> "<<q.front()<<endl;
	cout<<"size of Queue before pop-> "<<q.size()<<endl;
	q.pop();
	cout<<"First Element after pop-> "<<q.front()<<endl;
	cout<<"size of Queue after pop-> "<<q.size()<<endl;
	cout<<"Empty or not-> "<<q.empty()<<endl;

	// -------------- Priority Queue -----------
	cout<<endl<<endl<<"Prioriy queue"<<endl;

	// mini heap
	priority_queue<int, vector<int>,greater<int>> mini;

	// maxi heap
	priority_queue<int> maxi;

	maxi.push(1);
	maxi.push(3);
	maxi.push(0);
	maxi.push(2);
	int n =maxi.size(); 
	cout<<"size of maxi queue-> "<<maxi.size()<<endl; 
	for(int i=0; i<n;i++){
		cout<<maxi.top()<<" "; // decending
		maxi.pop();
	}cout<<endl;

	mini.push(4);
	mini.push(2);
	mini.push(3);
	mini.push(0);
	int m = mini.size(); 
	cout<<"size of mini queue-> "<<mini.size()<<endl;
	for(int i=0; i<m;i++){
		cout<<mini.top()<<" ";   // acending
		mini.pop();
	}cout<<endl;

	cout<<"maxi Empty or not-> "<<maxi.empty()<<endl;
	cout<<"mini Empty or not-> "<<mini.empty()<<endl;


}