#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;cin >> n >> k;

    vector<ll> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    ll low = 0, high = stalls[n - 1] - stalls[0],answer = 0;

    while (low <= high) {

        ll mid = (low + high) / 2;

        ll lastPos = stalls[0];

        int cowsPlaced = 1;

        for (int i = 1; i < n; i++) {
            if (stalls[i] - lastPos >= mid) {
                cowsPlaced++;
                lastPos = stalls[i];
            }
        }

        if (cowsPlaced >= k) {
            answer = mid;
            low = mid + 1;   
        } else {
            high = mid - 1;  
        }
    }

    cout << answer << "\n";
    
    return 0;
}
