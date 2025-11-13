#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        long long maxSum = 0;

        for (ll x : a) 
            maxSum += llabs(x);

        int ops = 0;
        bool inNegRun = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] < 0) {
                if (!inNegRun) {
                    ops++;
                    inNegRun = true;
                }
            } else if (a[i] > 0) {
                inNegRun = false;
            } else {
                // a[i] == 0 : NOT change inNegRun (zeros do not break negative runs)
            }
        }

        cout << maxSum << " " << ops << "\n";
    }


    
    return 0;
}
