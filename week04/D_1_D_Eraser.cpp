#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;cin >> t;

    while(t--){
        int n, k;
        string s;cin >> n >> k >> s ;

        int operations = 0;
        for (int i = 0; i < n;) {
            if (s[i] == 'B') {
                operations++;
                i += k;  
            } 
            else {
                i++;
            }
        }

        cout << operations << "\n";
    }


    return 0;
}
