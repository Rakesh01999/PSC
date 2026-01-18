#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;cin >> n >> t;

    vector<ll> k(n);

    for(int i = 0; i < n; i++) {
        cin >> k[i];
    }

    sort(k.begin(), k.end());
    ll low = 0;
    ll high = k[0]*t;
    ll answer = high;

    while(low <= high){
        ll mid = (low + high) / 2;

        ll products = 0;
        for (ll i = 0; i < n; i++) {
            products += mid / k[i] ;
            if(products >= t)
                break;
        }

        if(products >= t) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1; 
        }
    }

    cout << answer << "\n";

    return 0;
}

