
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        
        for(auto &x : a)
            cin >> x;

        long long ans = 0;

        for (int b = 30; b >= 0; b--) {
            long long mask = 1LL << b;
            long long need = 0;

            for (int i = 0; i < n; i++) {
                if ((a[i] & mask) == 0)
                    need++;
            }

            if (need <= k) {
                ans |= mask;
                k -= need;
            }
        }

        cout << ans << "\n";
    
    }


    return 0;
}
