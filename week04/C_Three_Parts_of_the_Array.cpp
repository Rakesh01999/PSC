#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<long long> d(n);
    for (int i = 0; i < n; ++i) cin >> d[i];

    int i = 0, j = n - 1;
    long long leftSum = 0, rightSum = 0, ans = 0;

    while (i <= j) {
        if (leftSum <= rightSum) {
            leftSum += d[i++];
        } else {
            rightSum += d[j--];
        }
        if (leftSum == rightSum) ans = leftSum;
    }

    cout << ans << "\n";
    return 0;
}
