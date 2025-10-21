
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;cin>>n;
    string s;cin>>s;
    set<string> st;
    map<string,int> mp;
    multimap<int,string> mp1;
    for(int i=0;i<n-1;i++){
        string t="";
        t+=s[i];
        t+=s[i+1];
        st.insert(t);
        mp[t]++;
    }
    for(auto x:mp){
        mp1.insert({x.second,x.first});
    }
    auto it=mp1.end();
    it--;
    cout<<it->second<<endl;

    return 0;
}
