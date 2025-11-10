#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        string s;cin >> s;
        s = " " + s; 
        
        vector<long long> pref(n + 1, 0);
        
        for (int i = 1; i <= n; ++i) 
            pref[i] = pref[i - 1] + a[i];

        vector<int> Ls, Rs;
        for (int i = 1; i <= n; ++i) {
            if (s[i] == 'L') Ls.push_back(i);
            else Rs.push_back(i);
        }

        long long ans = 0;
        int p = 0;
        int q = (int)Rs.size() - 1;

        while (p < (int)Ls.size() && q >= 0 && Ls[p] < Rs[q]) {
            int l = Ls[p];
            int r = Rs[q];
            ans += pref[r] - pref[l - 1];
            ++p;
            --q;
        }

        cout << ans << '\n';
    }

    return 0;
}
