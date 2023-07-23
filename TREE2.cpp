#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool allzero(int arr[], int n);

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (allzero(arr, n)) {
            cout << 0 << endl;
        } else {
            
        sort(arr, arr+n);
        int test = 1;
        for (int i = 0; i < (n-1); i++) {
            if (arr[i] == 0) {
                continue;
            } else {
                for (int j = i+1; j < n; j++) {
                if (arr[j] != arr[i]) {
                    test++;
                    i = j - 1;
                    break;
                }
            }
            }
        }

        cout << test << endl;

        }       
    }
}

bool allzero (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            return false;
        }
    }
    return true;
}
