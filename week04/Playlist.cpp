#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> lastIndex;
    int l = 0, ans = 0;

    for (int r = 0; r < n; r++) {
        if (lastIndex.count(a[r])) {
            l = max(l, lastIndex[a[r]] + 1);
        }
        lastIndex[a[r]] = r;
        ans = max(ans, r - l + 1);
    }

    cout << ans << "\n";

    return 0;
}
