#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        string s1, s2;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                s1.push_back(a[i]);
                s2.push_back(b[i]);
            } else {
                s1.push_back(b[i]);
                s2.push_back(a[i]);
            }
        }

        int zeros1 = count(s1.begin(), s1.end(), '0');
        int zeros2 = count(s2.begin(), s2.end(), '0');

        int need1 = (n + 1) / 2; 
        int need2 = n / 2;       

        if (zeros1 >= need1 && zeros2 >= need2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
