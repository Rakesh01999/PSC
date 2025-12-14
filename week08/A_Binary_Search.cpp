#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;

    cin >> n >> k;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(k--) {
        ll x;cin >> x;

        int left = 0, right = n - 1;
        bool found = false;

        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(arr[mid] == x) {
                found = true;
                break;
            } else if(arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if(found)
            cout << "YES\n";
        else    
            cout<< "NO\n";
    }

    return 0;
}
