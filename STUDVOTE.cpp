#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool isValid(vector<int>& vc);

int main() {
	int t;
	cin >> t;
	
	while (t--) 
    {
        int n, k, input;
        cin >> n >> k;
        
        unordered_map <int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            cin >> input;

            if (input == i+1) {
                mp[input].push_back(-1);
            } else {
                mp[input].push_back(1);
            }
        }

        int res = 0;

        for (auto& pair : mp) {
            if (pair.second.size() >= k && isValid(pair.second)) {
                res++;
            }
        }

        cout << res << endl;
    }

	return 0;
}

bool isValid(vector<int>& vc) {
    for (auto it : vc) {
        if (it == -1) 
        {
            return false;
        }
    }

    return true;
}
