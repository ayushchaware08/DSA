#include <bits/stdc++.h>
using namespace std;

// remove special character
bool valid(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9')) {
        return true;
    } else {
        return false;
    }
}

// Lowercase
char tolowercase(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// Palindrome
bool palindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    while (i <= j) {
        if (s[i] != s[j]) {
            return false;
        } else {
            i++;
            j--;
        }
    }
    return true;
}

bool checkPalindrome(string s) {
    // Special Char Valid and Lowercase
    string temp = "";
    for (int j = 0; j < s.length(); j++) {
        if (valid(s[j])) {
            temp.push_back(tolowercase(s[j]));
        }
    }

    // Palindrome
    return palindrome(temp);
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // ignore newline character after reading integer
    
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        if (checkPalindrome(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
