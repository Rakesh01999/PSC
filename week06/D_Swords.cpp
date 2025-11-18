#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long x = *max_element(a.begin(), a.end());

    long long g = 0;
    long long total = 0;
    for (int i = 0; i < n; i++) {
        long long diff = x - a[i];
        total += diff;
        g = __gcd(g, diff);
    }

    long long y = total / g;
    cout << y << " " << g << "\n";

    return 0;
}
