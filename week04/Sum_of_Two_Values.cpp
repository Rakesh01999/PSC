#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    map<long long, int> seen; 
    
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;

        long long need = x - val;
        if (seen.count(need)) {
            cout << seen[need] + 1 << " " << i + 1 << "\n";
            return 0;
        }
        seen[val] = i;
    }

    cout << "IMPOSSIBLE\n";


    return 0;
}
