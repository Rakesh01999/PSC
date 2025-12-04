#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;

        // largest power of 2 <= N
        long long p = 1;
        while (p * 2 <= N) p *= 2;

        long long ans = max(N - p + 1, p / 2);
        cout << ans << "\n";
    }
    
    return 0;
}
