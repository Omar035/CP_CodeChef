#include <iostream>
using namespace std;

int main () {
	int t;
	cin >> t;
	
	while (t--) 
	{
		string str;
		cin >> str;
		
		int one = 0, zero = 0;
		
		for (auto it : str) {
			if (it == '1') {
				one++;
			} else if (it == '0') {
				zero++;
			}
		}
	  
	  if (one == 1 || zero == 1) {
	  	cout << "Yes" << endl;
	  } else {
	  	cout << "No" << endl;
	  }
	}
}