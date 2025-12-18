#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) 
        cin>>arr[i];
    
    sort(arr.begin(),arr.end());

    int x;cin>>x;
    
    auto it=upper_bound(arr.begin(), arr.end(), x);
    int ans = it-arr.begin();
    cout<<ans<<endl;
    
    return 0;
}
