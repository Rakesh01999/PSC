#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n ; cin >> n;

        vector<int> p(n);
        
        for (int i = 0; i < n; i++) 
            cin >> p[i];

        deque<int> dq;
        dq.push_back(p[0]);
        
        for (int i = 1; i < n; i++) {
            if (p[i] < dq.front())
                dq.push_front(p[i]);
            else
                dq.push_back(p[i]);
        }

        for (int x : dq)
            cout << x << " ";
        cout << "\n";
    }

    
    return 0;
}
