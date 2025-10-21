#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin >> t;
    while (t--) {
       int n;cin>>n;
       vector<int>v;
       for (int i = 0; i < n; i++)
       {
            int x;cin>>x;
            v.push_back(x);
       }
       set<int>seen;
       int idx = n-1;
       while(idx >= 0){
            if(seen.count(v[idx])) break;
            seen.insert(v[idx]);
            idx--;
       }

       cout<<idx + 1 << endl ;
    }

    return 0;
}

