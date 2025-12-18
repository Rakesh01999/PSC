#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    
    vector<ll> prefix(n);
 
    for (int i = 0; i < n; i++) {
        ll worms;
        cin >> worms;
        if(i == 0)
            prefix[i] = worms;
        else
            prefix[i] = prefix[i - 1] + worms;
    }

    ll q;cin>>q;
    while(q--){
        ll m;cin>>m;
        auto it  = lower_bound(prefix.begin(), prefix.end(), m);
        ll ans =it -prefix.begin()+ 1;
        cout<<ans<<"\n";
    }

    return 0;   
}