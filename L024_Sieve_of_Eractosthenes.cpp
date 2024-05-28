#include <iostream>
#include <vector>
using namespace std;

class algorithm
{
public:
	void countprimes(int n)
	{
		int count = 0;
		vector<bool> prime(n + 1, true); //all prime true

		prime[0] = prime[1] = false; // 0 and 1 prime nahi hote

		for(int i =2; i<n; i++){
			if(prime[i]){  //is prime -> true
				count++;
				
				for(int j = 2*i; j<n; j=j+i){ // table ko non prime marked
					prime[j]=0; 
				}
			}
		}
		cout<<"count is :"<< count;
	}
};
int main()
{
	int n;
	cin>>n;
	algorithm cp;
	cp.countprimes(n);
}