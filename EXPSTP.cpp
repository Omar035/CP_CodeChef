#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {

        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        if ((x1 == x2) && (y1 == y2)) {
            cout << 0 << endl;
        } else {

        int mid;
        int d5;
//inner cost
        if (x2 > x1) {
            if (y2 > y1) {
                d5 = (x2-x1) + (y2-y1);
            } else {
                d5 = (x2-x1) + (y1-y2);
            }

         } else {
            if (y2 > y1) {
                d5 = (x1-x2) + (y2-y1);
            } else {
                d5 = (x1-x2) + (y1-y2);
            }
         }
//outer cost
        if (n%2 == 0) {
            mid = n/2;
            int d1;
            int d2;
            int d3;
            int d4;

            if (x1 <= mid) {
                d1 = x1;
            } else {
                d1 = n - x1 + 1;
            }

            if (y1 <= mid) {
                d2 = y1;
            } else {
                d2 = n - y1 + 1;
            }

            if (x2 <= mid) {
                d3 = x2;
            } else {
                d3 = n - x2 + 1;
            }

            if (y2 <= mid) {
                d4 = y2;
            } else {
                d4 = n - y2 + 1;
            }



            int a = 0;
         int b = 0;

         if (d1 > d2) {
            a = d2;
         } else {
            a = d1;
         }

         if (d3 > d4) {
            b = d4;
         } else {
            b = d3;
         }

        int out = a + b;
        if (out > d5) {
            cout << d5 << endl;
        } else {
            cout << out << endl;
        }

        } else {
            mid = (n/2);
            int d1;
            int d2;
            int d3;
            int d4;
            
            if (x1 > mid) {
                d1 = n-x1 + 1;
            } else {
                d1 = x1;
            }

            if (y1 > mid) {
                d2 = n-y1 + 1;
            } else {
                d2 = y1;
            }

            if (x2 > mid) {
                d3 = n-x2 + 1;
            } else {
                d3 = x2;
            }

            if (y2 > mid) {
                d4 = n-y2 + 1;
            } else {
                d4 = y2;
            }

         int a = 0;
         int b = 0;

         if (d1 > d2) {
            a = d2;
         } else {
            a = d1;
         }

         if (d3 > d4) {
            b = d4;
         } else {
            b = d3;
         }

        int out = a + b;

        if (out > d5) {
            cout << d5 << endl;
        } else {
            cout << out << endl;
        }

        }


        }
       
    }

    return 0;
}
