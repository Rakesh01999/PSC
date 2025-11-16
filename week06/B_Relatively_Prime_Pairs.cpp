#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    ll l, r;cin>>l>>r;
    
    if ((r - l + 1) % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        ll line=(r-l+1)/2;
        while (line-- && l<=r)
        {
            cout<<l<<" "<<l+1<<endl;
            l=l+2;
        }
    }
    
    return 0;
}

