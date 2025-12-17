#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) 
        cin>>arr[i];
    
    sort(arr.begin(),arr.end());

    int x;cin>>x;
    
    auto it=lower_bound(arr.begin(), arr.end(), x);
    if(it!=arr.end() && *it==x){
        // cout<<"Element found at index: "<<(it - arr.begin())<<endl;
        int idx = it - arr.begin();
        int lowidx = idx-1;
        int highidx = idx+1;
        
        cout<<arr[lowidx]<<" "<<arr[highidx]<<endl;

    }
    else{
        cout<<"X"<<endl;
    }
    
    return 0;
}
