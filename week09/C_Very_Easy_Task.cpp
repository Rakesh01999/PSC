#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){ 
    ll n, x,y;cin>>n>>x>>y;
    ll first = min(x, y);

    ll ans = 0;
    if(n == 1){
        ans = first;
        cout<<ans<<endl;
    }

    
    return 0;
}
