#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;cin>>s;

    vector<char>v;
    for (char i = 'a'; i <= 'z'; i++)
    {
        v.push_back(i);
    }
    
    bool vis[26]={false};
        
    for (int i = 0; i < s.size(); i++)
    {
        if(vis[s[i]-'a']==false){
            vis[s[i]-'a']=true;
        }
    }
    
    for(int i=0;i<26;i++){
        if(vis[i]==false){
            cout<<v[i]<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;

    return 0;
}

