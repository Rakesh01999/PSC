#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;cin >> N >> M;

    vector<int> diff(N + 2, 0);

    for (int i = 0; i < M; i++) {
        int L, R;
        cin >> L >> R;
        diff[L] += 1;
        if (R + 1 <= N)
            diff[R + 1] -= 1;
    }

    vector<int> cover(N + 2, 0);
    for (int i = 1; i <= N; i++) {
        cover[i] = cover[i - 1] + diff[i];
    }

    int min_cover = INT_MAX;
    for (int i = 1; i <= N; i++) {
        min_cover = min(min_cover, cover[i]);
    }

    if (min_cover == 0)
        cout << 0 << "\n";
    else
        cout << min_cover << "\n";

        
    return 0;
}
