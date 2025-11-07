
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, q;
    cin >> n >> q;
    ll pref[n];
    ll sum = 0;
    pref[0]=0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        pref[i] = x;
        sum += pref[i];
        pref[i] = sum;
    }


    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        
        cout << pref[b] - pref[a - 1] << endl;
    }
    return 0;
}