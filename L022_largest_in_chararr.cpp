// LArgest word in a sentence;
// need to improve
#include <iostream>
using namespace std;
int main()
{
	int n; // no of word

	cin >> n;
	cin.ignore();
	char arr[n + 1];

	cin.getline(arr, n);
	cin.ignore();

	int currentlen = 0, maxlen = 0;
	int i = 0;
	while(1)
	{
		if (arr[i] == ' ' || arr[i] == '\0')
		{
			if (currentlen > maxlen)
			{
				maxlen = currentlen;
			}
			currentlen = 0;
		}
		else
			{
				currentlen++;
				if (arr == '\0')
				{
					break;
				}
			}
		i++;
		
	}
		cout << "Max Length of word in a Sentence: " << maxlen << endl;
	return 0;
}
