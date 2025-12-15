#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;cin >> N;

    vector<ll> heights(N);
    for(int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int Q;cin >> Q;

    while(Q--) {
        ll X;cin >> X;

        auto it1 = lower_bound(heights.begin(), heights.end(), X);

        if(it1 == heights.begin())
            cout << "X ";
        else
            cout << *(it1 - 1) << " ";

        auto it2 = upper_bound(heights.begin(), heights.end(), X);

        if(it2 == heights.end())
            cout << "X\n";
        else
            cout << *it2 << "\n";
    }


    return 0;
}
