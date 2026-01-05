#include <bits/stdc++.h>
using namespace std;

bool canDelete(const string &t, const string &p, const vector<int> &perm, int k) {
    int n = t.size();
    vector<bool> deleted(n+1, false);
    for (int i = 0; i < k; i++) {
        deleted[perm[i]] = true; 
    }
    int j = 0; 
    for (int i = 1; i <= n; i++) {
        if (!deleted[i] && j < (int)p.size() && t[i-1] == p[j]) {
            j++;
        }
    }
    return j == (int)p.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t, p ; cin >> t >> p;
    int n = t.size();
    vector<int>perm(n);
    for (int i = 0; i < n; i++)
        cin >> perm[i];

    int lo = 0, hi = n, ans = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (canDelete(t, p, perm, mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
