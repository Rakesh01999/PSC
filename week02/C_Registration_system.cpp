
#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr),cout.tie(nullptr);
    
    int n;cin>>n;
    map<string, int>db;
    while (n--)
    {
        string name,newName;cin>>name;
        if(db.find(name)==db.end()){
            db[name]=0;
            cout<<"OK"<<endl;
        }else{
            db[name]++;
            newName=name+to_string(db[name]);
            cout<<newName<<endl;
        }   
    }
    
    return 0;
}
