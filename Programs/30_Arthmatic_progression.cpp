// AP = (3 n +7)
// TO FING nTH tERM

#include <iostream>
using namespace std;

int Ap(int n)
{
	int cal = 3 * n + 7;
}
int main()
{
	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int ans = Ap(n);
	cout << "The nth term is " << ans << endl;
}
