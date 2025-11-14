#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;cin >> n >> m;

    vector<long long> a(n);

    vector<long long> b(m);

    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    long long ans = 0;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } 
        else if (a[i] > b[j]) {
            j++;
        } 
        else {
            long long val = a[i];

            long long cntA = 0;
            while (i < n && a[i] == val) {
                cntA++;
                i++;
            }

            long long cntB = 0;
            while (j < m && b[j] == val) {
                cntB++;
                j++;
            }

            ans += cntA * cntB;
        }
    }

    cout << ans << "\n";
    
    return 0;
}

