#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--){
        int n, a, b;
        cin >> n >> a >> b;
        int  p = log2(n);
        cout << (((p-1)*b) + (p*a)) << endl;
    }

}
