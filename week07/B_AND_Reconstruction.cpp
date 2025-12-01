#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n;cin >> n;

        vector<long long> b(n-1);
        
        for(int i = 0; i < n-1; i++)
            cin >> b[i];

        vector<long long> a(n);

        a[0] = b[0];
        
        for (int i = 1; i < n-1; i++) {
            a[i] = b[i-1] | b[i];
        }
        a[n-1] = b[n-2];

        bool ok = true;
        for (int i = 0; i < n-1; i++) {
            if ((a[i] & a[i+1]) != b[i]) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            for(int i = 0; i < n; i++) 
                cout << a[i] << " ";
            cout << "\n";
        }
    }


    return 0;
}
