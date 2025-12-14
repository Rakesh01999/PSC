#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;cin>>n;
    vector<ll> v1(n);
    vector<ll> v2;
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    // sort(v1.begin(), v1.end());

    ll k;cin>>k;
    while (k--)
    {
        ll l, r;cin>>l>>r;
        ll cnt = 0;
        // while (l<=r)
        // {
            for (int i = 0; i < n; i++)
            {
                if (v1[i] >= l && v1[i] <= r)
                {
                    cnt++;
                }
            }        
        // }
        v2.push_back(cnt);
    }

    for(auto x:v2)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}