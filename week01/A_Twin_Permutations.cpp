#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i < n; ++i) {
            cout << (n - a[i] + 1);
            if (i + 1 < n)
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
