#include <iostream>
using namespace std;

int sub (int x, int y) {
	if (x > y) {
		return x - y;
	} else {
		return y - x;
	}
}

int main () {
	
	int t;
	cin >> t;
	
	while (t--) {
		
		//Inputs:
		int n, u, d;
		cin >> n >> u >> d;
		//n = number of hills
		//u = most height chef can jump to
		//d = most depth chef can jump to
		
		int arr[n];
		
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		//Logic begins:
		
		//1.If there's only 1 hill?
		
		int x = 1;
		bool jump = true;
		int gap;
		
		if (n == 1) {
			
			cout << 1 << endl;
			
		} else {
			
			for (int i = 0; i < (n-1); i++) {
				
				if (arr[i+1] > arr[i]) {
					gap = sub(arr[i+1], arr[i]);
					if (gap > u) {
						break;
					} else {
						x++;
					}
				} else if (arr[i+1] < arr[i]) {
					gap = sub(arr[i+1], arr[i]);
					if (gap > d) {
						if (jump) {
							jump = false;
							x++;
						} else {
							break;
						}
					} else {
						x++;
					}
					
				} else {
					x++;
				}
				
			}
	
			cout << x << endl;
		}
		
	}
	
	return 0;
}
