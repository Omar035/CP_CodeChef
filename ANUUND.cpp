#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool ce(int n);

int main() {
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int l = 0;
        int r = n-1;

        if (ce(n) == 1) {
           
           while (l < r) {
                int end = (n/2) - 1;

                if (l == end) {
                    cout << arr[l] << " " << arr[r] << endl;
                    break;
                } else {
                    cout << arr[l] << " ";
                    cout << arr[r] << " ";
                }
                
                l++;
                r--;
           }
        } else {

            while (l <= r) {
                int end = (n-1)/2;

                if (l == r){
                    cout << arr[l] << endl;
                    break;
                } else {
                    cout << arr[l] << " ";
                    cout << arr[r] << " ";
                }
                l++;
                r--;
            }
        }
    }
}

bool ce(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
