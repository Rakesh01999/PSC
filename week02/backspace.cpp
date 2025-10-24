
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    vector<char>v;
    for (int i = 0; i < s.size(); i++)
    {
        if( s[i]=='<' && !v.empty())
            v.pop_back();
        else    
            v.push_back(s[i]);
    }
    for(auto val:v)
        cout<<val;
    
    cout<<endl;
    return 0;
}
