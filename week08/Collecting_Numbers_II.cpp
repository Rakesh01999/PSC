#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;cin >> n >> m;

    vector<int> arr(n+1), pos(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int rounds = 1;
    for (int i = 1; i < n; i++) {
        if (pos[i] > pos[i+1]) rounds++;
    }

    auto check = [&](int x) -> bool {
        if (x < 1 || x >= n) return false;
        return pos[x] > pos[x+1];
    };

    while (m--) {
        int a, b;
        cin >> a >> b;
        int x = arr[a], y = arr[b];

        set<int> affected = {x-1, x, y-1, y};

        for (int idx : affected) rounds -= check(idx);

        swap(arr[a], arr[b]);
        pos[x] = b;
        pos[y] = a;

        for (int idx : affected) rounds += check(idx);

        cout << rounds << "\n";
    }


    return 0;
}
