#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while (t--){
        int n;cin >> n;

        vector<int> A(n);

        int totalXor = 0;

        for (int i = 0; i < n; i++) {
            cin >> A[i];
            totalXor ^= A[i];
        }

        int ans = totalXor;

        for (int x : A) {
            ans = min(ans, totalXor ^ x);
        }

        cout << ans << "\n";
    }


    return 0;
}
