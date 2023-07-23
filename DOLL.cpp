#include <iostream>
using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        int shot = 0;

        for (int p = 0; p < n; p++) {
            if (arr[p] > k) {
                shot++;
            }
        }

        cout << shot << endl;

    }
    return 0;
}
