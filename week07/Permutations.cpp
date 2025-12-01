
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>ve;
    vector<int>vo;

    for (int i = 1; i <= n; i++)
    {
        if(i%2==0)
            ve.push_back(i);
        else
            vo.push_back(i);
    }

    if(n==1)
        cout<<1<<endl;
    else if(n<=3)
        cout<<"NO SOLUTION"<<endl;
    else{
        for(auto it:ve)
            cout<<it<<" ";
        for(auto it:vo)
            cout<<it<<" ";
    }


    return 0;   
}
