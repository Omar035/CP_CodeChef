#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string u;
        cin >> u;

        // //a b b b b b c
        // //0 1 2 3 4 5 6

        // for (int i = 0 ; i < n; i++) {

        //     int k = i + 1;
        //     int cnt = 1;
        //     while (str[k] == str[i]) {
        //         cnt++;
        //         k++;
        //     }

        //     if (cnt < 3) {
        //        cout << str[i];
        //     } else {
        //         i += cnt - 1;
        //         cnt /= 3;
        //         for (int j = 0; j < cnt; j++) {
        //             cout << str[i];
        //         }
        //     }
        // }

        // cout << endl;

        int temp = 1;
        char var = u[0];

        string ans = "";
        for (int i = 1; i < n; i++) {
            
            if (var == u[i]) {
                temp++;
            } else {

                if (temp % 2== 0) {
                    ans += var;
                    ans += var;
                } else {
                    ans += var;
                }

                var = u[i];
                temp = 1;
            }
        }

        if (temp % 2== 0) {
                    ans += var;
                    ans += var;
                } else {
                    ans += var;
                }
        cout << ans << endl;
    }
 
}
