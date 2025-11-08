#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);
    vector<long long>ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end()); 
    
    for (int i = 0; i < n; i++) {
        long long target = x - a[i].first;
        int l = i + 1, r = n - 1;

        while (l < r) {
            long long sum = a[l].first + a[r].first;

            if (sum == target) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << "\n";
                ans.push_back(a[i].second);
                ans.push_back(a[l].second);
                ans.push_back(a[r].second);
                sort(ans.begin(), ans.end());
                // for(auto val: ans)
                //     cout<<val<<" ";
                // cout<<endl;
                return 0;
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}
