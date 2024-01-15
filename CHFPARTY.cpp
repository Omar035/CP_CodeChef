#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	
	while (t--) {
		int n, joined = 0;
		cin >> n;
		
		int* arr = new int[n];
		
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		sort(arr, arr+n);
		
		for (int i = 0; i < n; i++) {
			if (joined >= arr[i]) {
				joined++;
			}
		}
		
		cout << joined << endl;
	}
}