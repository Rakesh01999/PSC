#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;cin >> n;
    string s;cin >> s;

    vector<ll> ones, zeros, ans;

    
    for (ll i = 0; i < n; i++) {
        if (s[i] == '1')
            ones.push_back(i);
    }

    for (ll i = n - 1; i >= 0; i--) {
        if (s[i] == '0') 
            zeros.push_back(i);
    }

    ll b = ones.size();   
    ll a = zeros.size();  
    
    for (ll i = 0; i < (ll)ones.size(); i++) {
        if (ones[i] < n - b) {
            ans.push_back(ones[i]);
        }
    }

    for (ll i = 0; i < (ll)zeros.size(); i++) {
        if (zeros[i] > a - 1) {
            ans.push_back(zeros[i]);
        }
    }

    if (ans.empty()) {
        cout << "0\n";
    } else {
        sort(ans.begin(), ans.end());
        cout << "1\n";
        cout << ans.size() << " ";
        for (ll idx : ans)
            cout << idx + 1 << " ";
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t ; cin >> t;
    while(t--) {
        solve();
    }


    return 0;
}
