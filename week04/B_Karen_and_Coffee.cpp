#include <bits/stdc++.h>
using namespace std;

const int MAX = 200000 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;cin >> n >> k >> q;

    vector<int> diff(MAX, 0);

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        if (r + 1 < MAX) 
            diff[r + 1] -= 1;
    }

    vector<int> count(MAX, 0);
    count[0] = diff[0];
    for (int i = 1; i < MAX; i++)
        count[i] = count[i - 1] + diff[i];

    vector<int> ok(MAX, 0);
    for (int i = 1; i < MAX; i++) {
        if(count[i] >= k)
            ok[i] =  1;
        else
            ok[i] =  0;
    }

    vector<int> pref(MAX, 0);
    for (int i = 1; i < MAX; i++)
        pref[i] = pref[i - 1] + ok[i];

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << "\n";
    }

    return 0;
}
