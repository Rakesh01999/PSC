
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;cin >> n >> m;

    vector<long long> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int i = 0, j = 0;

    vector<long long> ans;

    ans.reserve(n + m);

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            ans.push_back(a[i]);
            i++;
        } else {
            ans.push_back(b[j]);
            j++;
        }
    }

    while (i < n)
        ans.push_back(a[i++]);
    while (j < m)
        ans.push_back(b[j++]);

    for (long long x : ans)
        cout << x << " ";
    cout << "\n";

    return 0;
}
