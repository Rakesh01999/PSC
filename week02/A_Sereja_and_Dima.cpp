
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    list<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int sereja=0,dima=0;
    bool s=false;
    for (int i = 0; i < n; i++)
    {
        if(s==false ){
            if(v.front()>v.back()){
                sereja+=v.front();
                v.pop_front();
            }
            else{
                sereja+=v.back();
                v.pop_back();
            }
            s=true;
        }
        else{
            if(v.front()>v.back()){
                dima+=v.front();
                v.pop_front();
            }
            else{
                dima+=v.back();
                v.pop_back();
            }
            s=false;
        }
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}
