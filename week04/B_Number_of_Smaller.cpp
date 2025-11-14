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

    vector<long long> ans(m);

    int i = 0;
    for (int j = 0; j < m; j++) {
        while (i < n && a[i] < b[j]) {
            i++;
        }
        ans[j] = i; 
         
    }

    for (long long x : ans) 
        cout << x << " ";
    cout << "\n";

    return 0;
}
