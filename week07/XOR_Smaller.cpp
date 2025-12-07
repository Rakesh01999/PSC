#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;cin>>t;
	while(t--){
	    int n; cin>>n;
	    int result=INT_MAX;
	    for(int i=0; i<n; i++) {
	       int a;cin>>a;
	       result = result & a;
	    }

	    cout<<result<<endl;
	}


    return 0;
}