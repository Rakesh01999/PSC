#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;long long x;
    cin >> n >> x;

    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    
    sort(p.begin(), p.end());

    int l = 0, r = n - 1;
    int gondolas = 0;

    while (l <= r) {
        if (p[l] + p[r] <= x) {
            l++;  
            r--;  
        } else {
            r--;  
        }
        gondolas++;
    }

    cout << gondolas << '\n';

    
    return 0;
}
