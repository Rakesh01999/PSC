#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    map<int, int> freq; 
    ll total = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        freq[a[right]]++;

        while ((int)freq.size() > k) {
            freq[a[left]]--;
            if (freq[a[left]] == 0)
                freq.erase(a[left]);
            left++;
        }

        total += (right - left + 1);
    }

    cout << total << "\n";
    return 0;
}
