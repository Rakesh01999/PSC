#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while(t--){

        int n;cin >> n;

        ll x = 0;

        for(int i = 0; i < n; i++){
            long long a;
            cin >> a;
            x ^= a;         
        }

        cout << (x << 1) << "\n";   
        
    }

    
    return 0;
}
