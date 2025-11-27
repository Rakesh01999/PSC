#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long N, X, Y;
        cin >> N >> X >> Y;

        long long row = N - 1;
        long long col = N - 1;

        long long d1 = min(X - 1, Y - 1);     // up-left
        long long d2 = min(X - 1, N - Y);     // up-right
        long long d3 = min(N - X, Y - 1);     // down-left
        long long d4 = min(N - X, N - Y);     // down-right

        long long total = row + col + d1 + d2 + d3 + d4;
        cout << total << "\n";
    }
    return 0;
}
