#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int mid = n / 2;

    ll low = a[mid];
    ll high = a[mid] + k;
    ll answer = a[mid];

    while (low <= high) {
        ll midVal = (low + high) / 2;
        ll needed = 0;

        for (int i = mid; i < n; i++) {
            if (a[i] < midVal) {
                needed += (midVal - a[i]);
            }
        }

        if (needed <= k) {
            answer = midVal;
            low = midVal + 1;   
        } else {
            high = midVal - 1; 
        }
    }

    cout << answer << "\n";

    return 0;
}
