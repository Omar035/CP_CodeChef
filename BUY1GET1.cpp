#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
	int t;
	cin >> t;
	
	while (t--) {
		
		string str;
		cin >> str;
		
		int str_n = str.length();
		
		vector <char> vcc;
		vcc.push_back(str[0]);
		
		for (int i = 1; i < str_n; i++) {
			for (int j = 0; j < i; j++) {
				if (str[j] == str[i]) {
					break;
				} else  {
					if (j == (i-1)) {
						vcc.push_back(str[i]);
					} else {
						continue;
					}
				}
			}
		}
		
		vector <int> vci;
		int counter = 0;
		
		for (int i = 0; i < vcc.size(); i++) {
			for (int j = 0; j < str_n; j++) {
				if (str[j] == vcc[i]) {
					counter++;
				}
			}
			
		if (counter % 2 == 0) {
			vci.push_back(counter/2);
			counter = 0;
		} else {
			vci.push_back((counter/2) + 1);
			counter = 0;
		}
		}
		
		int final_result = 0;
		
		for (int k = 0; k < vci.size(); k++) {
			final_result += vci[k];
		}
		
		cout << final_result << endl;
	}
}
