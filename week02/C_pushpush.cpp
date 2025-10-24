#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    deque<int> dq;
    bool rev = false;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (!rev)
            dq.push_back(x);
        else
            dq.push_front(x);
        rev = !rev;
    }

    if (rev)
        reverse(dq.begin(), dq.end());

    for (int x : dq)
        cout << x << " ";
    cout << '\n';

    return 0;
}
