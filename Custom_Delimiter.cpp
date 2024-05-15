#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    char delimiter = ';'; //set delimiter

    getline(cin, input, delimiter);

   	cout << "You entered: " << input << endl;

    return 0;
}
