#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> v(n);
    unordered_set<string> seen;
    vector<string> result;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(v[i]) == seen.end()) {
            seen.insert(v[i]);
            result.push_back(v[i]);
        }
    }

    for (auto name : result) {
        cout << name << '\n';
    }

    return 0;
}
