#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        bool allOdd = true;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) allOdd = false;
        }

        cout << (allOdd ? "YES" : "NO") << "\n";
    }

    return 0;
}
