
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin >> t;

    while (t--) {
        int n;cin >> n;

        vector<int> pos(1001, -1); 
        
        for (int i = 1; i <= n; i++) {
            int x;cin >> x;
            pos[x] = i;
        }

        int ans = -1;

        for (int x = 1; x <= 1000; x++) {
            if (pos[x] == -1) 
                continue;
            for (int y = 1; y <= 1000; y++) {
                if (pos[y] == -1)
                    continue;
                if (__gcd(x, y) == 1) {
                    ans = max(ans, pos[x] + pos[y]);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

