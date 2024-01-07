#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n, c = 0, o = 0, d = 0, e = 0, h = 0, f = 0;
        cin >> n;

        string arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            for (int j = 0; j < arr[i].size(); j++) {
                if (arr[i][j] == 'c') {
                    c++;
                } else if (arr[i][j] == 'o') {
                    o++;
                } else if (arr[i][j] == 'd') {
                    d++;
                } else if (arr[i][j] == 'e') {
                    e++;
                } else if (arr[i][j] == 'h') {
                    h++;
                } else if (arr[i][j] == 'f') {
                    f++;
                }
            }
        }

        /*
            codechef
            c = 2
            o = 1
            d = 1
            e = 2
            h = 1
            f = 1
        */

        int arr[6] = {c/2, o, d, e/2, h, f};

        sort(arr, arr+6);

        cout << arr[0] << endl;
    }
}
