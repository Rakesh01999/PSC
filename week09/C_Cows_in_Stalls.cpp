#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<long long> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    long long low = 0;
    long long high = stalls[n - 1] - stalls[0];
    long long answer = 0;

    // Binary search on distance
    while (low <= high) {
        long long mid = (low + high) / 2;

        // Check if we can place k cows with at least mid distance
        long long lastPos = stalls[0];
        int cowsPlaced = 1;

        for (int i = 1; i < n; i++) {
            if (stalls[i] - lastPos >= mid) {
                cowsPlaced++;
                lastPos = stalls[i];
            }
        }

        if (cowsPlaced >= k) {
            answer = mid;
            low = mid + 1;   // try for bigger distance
        } else {
            high = mid - 1;  // reduce distance
        }
    }

    cout << answer << "\n";
    return 0;
}
