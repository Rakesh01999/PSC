#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;cin >> t;
    while (t--) {
        int n;string s;cin >> n >> s;

        vector<ll> gains;
        ll base = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L') {
                base += i;
                gains.push_back((n - i - 1) - i);
            } else {
                base += (n - i - 1);
                gains.push_back(i - (n - i - 1));
            }
        }

        sort(gains.rbegin(), gains.rend());

        vector<ll> result;
        ll current = base;
        for (int k = 0; k < n; ++k) {
            if (gains[k] > 0) 
                current += gains[k];
            result.push_back(current);
        }

        for (ll val : result) 
            cout << val << " ";
        cout << endl ;
    }

    return 0;
}

