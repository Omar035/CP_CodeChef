#include <bits/stdc++.h>
using namespace std;

string L(string str);
string R(string str);

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    string str;
	    cin >> str;
	    
	    if (L(str) == R(str)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
	}
}

string L(string str) {
    if (str.length() == 1) {
        return str;
    } else {
        string newstr = "";
        newstr += str.substr(1);
        newstr += str[0];

        return newstr;
    }
}

string R(string str) {
    if (str.length() == 1) {
        return str;
    } else {
        string newstr = "";
        newstr += str[str.length()-1];
        newstr += str.substr(0, str.length() - 1);

        return newstr;
    }
}
