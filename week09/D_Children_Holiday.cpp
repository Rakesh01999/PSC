#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<int> t(n), z(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> z[i] >> y[i];
    }

    // Function to check if we can make at least m balloons in time T
    auto can = [&](long long T) {
        long long total = 0;
        for (int i = 0; i < n; i++) {
            long long cycle = 1LL * z[i] * t[i] + y[i];
            long long full = T / cycle;
            long long rem = T % cycle;
            long long balloons = full * z[i] + min((long long)z[i], rem / t[i]);
            total += balloons;
            if (total >= m) return true;
        }
        return false;
    };

    // Binary search for minimum time
    long long low = 0, high = 1e9, ansTime = 0;
    while (low <= high) {
        long long mid = (low + high) / 2;
        if (can(mid)) {
            ansTime = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    // Compute how many balloons each assistant makes
    vector<int> result(n, 0);
    long long remaining = m;

    for (int i = 0; i < n; i++) {
        long long cycle = 1LL * z[i] * t[i] + y[i];
        long long full = ansTime / cycle;
        long long rem = ansTime % cycle;
        long long balloons = full * z[i] + min((long long)z[i], rem / t[i]);

        long long used = min(balloons, remaining);
        result[i] = used;
        remaining -= used;
    }

    // Output
    cout << ansTime << "\n";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}
