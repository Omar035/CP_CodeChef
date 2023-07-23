#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int uk1, uk2, year;
        scanf("%d/%d/%d", &uk1, &uk2, &year);

        //both <=12
        //first > 12
        //second > 12

        if (uk1 > 12 && uk2 <= 12) {
            cout << "DD/MM/YYYY" << endl;
        } else if (uk2 > 12 && uk1 <= 12) {
            cout << "MM/DD/YYYY" << endl;
        } else {
            cout << "BOTH" << endl;
        }
    }
}
