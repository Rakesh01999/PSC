#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<pair<ll,int>> events;
    events.reserve(2*n);

    for (int i = 0; i < n; ++i) {
        ll l, r;
        cin >> l >> r;
        events.emplace_back(l, +1);
        events.emplace_back(r, -1);
    }

    sort(events.begin(), events.end(), [](const pair<ll ,int> &a, const pair<ll,int> &b){
        if (a.first != b.first)
            return a.first < b.first;
        return a.second > b.second; 
    });

    int active = 0;
    for (auto &e : events) {
        active += e.second;
        if (active > 2) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
