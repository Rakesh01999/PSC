#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int l = 0, r = n - 1;
        while (l < r && s[l] != s[r]) {
            l++;
            r--;
        }

        int ans ;
        if(l > r){
            ans = 0;
        }else{
            ans = r - l + 1;
        }
        cout << ans << "\n";
    }

    return 0;
}
