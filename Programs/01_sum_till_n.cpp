#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=1;
    cout<<"Enter the Number : "<<endl;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<< "the Sum till " << n << " is " << sum <<endl;
}