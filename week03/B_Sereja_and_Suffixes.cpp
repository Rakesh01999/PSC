
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m ;cin >> n >> m;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    vector<int> distinctSuffix(n + 1);
    vector<bool> seen(100001, false); 
    
    int distinctCount = 0;

    for (int i = n; i >= 1; --i) {
        if (!seen[a[i]]) {
            seen[a[i]] = true;
            distinctCount++;
        }
        distinctSuffix[i] = distinctCount;
    }

    while (m--) {
        int l;
        cin >> l;
        cout << distinctSuffix[l] << '\n';
    }

    return 0;
}

