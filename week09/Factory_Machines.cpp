#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long t;
    cin >> n >> t;

    vector<long long> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    long long low = 0;
    long long high = *min_element(k.begin(), k.end()) * t;
    long long answer = high;

    while (low <= high) {
        long long mid = (low + high) / 2;

        long long products = 0;
        for (long long time : k) {
            products += mid / time;
            if (products >= t) break;  // avoid overflow
        }

        if (products >= t) {
            answer = mid;
            high = mid - 1;  // try smaller time
        } else {
            low = mid + 1;   // need more time
        }
    }

    cout << answer << "\n";
    return 0;
}
