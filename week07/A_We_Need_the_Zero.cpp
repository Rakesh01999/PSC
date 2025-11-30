#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;cin >> t;
    while(t--) {
        int n;cin >> n;
        
        vector<int> a(n);

        int S = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            S ^= a[i];
        }

        if (n % 2 == 0){
            if (S == 0) {
                cout << a.back() << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else {
            cout << S << "\n";
        }
    }

    
    return 0;
}
