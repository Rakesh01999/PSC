
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int n;cin>>n;
    map<pair<int, int>, string>mp;
    while(n--){
        int a,b;
        string s;
        cin>>a>>b>>s;
        mp[{a,b}]=s;
    }
    int q;cin>>q;
    while (q--)
    {
        int x,y;cin>>x>>y;
        cout<<mp[{x,y}]<<endl;
    }
    
    return 0;
}
