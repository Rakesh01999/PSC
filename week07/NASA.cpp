#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindromeInt(int x) {
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int LIM = 1 << 15; 
    
    vector<int> pal;
    
    pal.reserve(500);
    
    for (int i = 0; i < LIM; ++i) {
        if (isPalindromeInt(i))
            pal.push_back(i);
    }

    int t;cin>>t;
    
    while (t--) {
        ll n;cin >> n;

        vector<int>a(n);
        
        for(int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> freq(LIM, 0);

        ll P = 0;
        
        for(int x : a){
            for (int p : pal) {
                int want = x ^ p;
                P += freq[want];
            }

            freq[x]++;
        }

        ll ans = P + n;
       
        cout << ans << '\n';
    }


    return 0;
}
