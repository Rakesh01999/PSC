#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;cin>>n>>x;
    int arr[n];
    int lessCnt=0, equalCnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<x)
            lessCnt++;
        else if(arr[i]==x)
            equalCnt++;
    }
    int missingCnt = x - lessCnt;
    int ans = missingCnt + equalCnt;
    cout<<ans<<endl;
    return 0;   
}
