#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t, n, k;cin >> t;
    while(t--){
        cin >> n;
        ll nonZero = 0;
        
        for (ll i = 0; i < n; i++) {
            cin >> k;
            if (k != 0)
                nonZero++;
        }

        ll zero = n - nonZero;

        cout << max(nonZero, zero) << "\n";
    }

    
    return 0;
}
