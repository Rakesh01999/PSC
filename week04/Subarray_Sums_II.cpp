#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;ll x;
    cin >> n >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    map<ll, ll> freq;   
    freq[0] = 1;        
    
    ll prefix = 0;
    ll count = 0;

    for (int i = 0; i < n; i++) {
        prefix += a[i];

        ll need = prefix - x;
        if (freq.count(need))
            count += freq[need];

        freq[prefix]++;
    }

    cout << count << "\n";
    return 0;
}
