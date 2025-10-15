#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while (t--)
    {        
        int n;cin>>n;
        int arr[n];
        int cnt1 = 0, cnt2 = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
                cnt1++;
            else
                cnt2++;
        }
        int result = cnt2 + (cnt1 + 1)/2 ;
        cout<<result<<endl;
        
    }

    return 0;
}
