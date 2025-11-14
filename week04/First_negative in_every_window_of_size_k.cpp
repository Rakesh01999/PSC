#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k) {
    deque<long long int> dq;
    vector<long long> result;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            dq.push_back(i);
    }

    for (int i = k; i < n; i++) {
        if (!dq.empty())
            result.push_back(arr[dq.front()]);
        else
            result.push_back(0);

        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        if (arr[i] < 0)
            dq.push_back(i);
    }

    if (!dq.empty())
        result.push_back(arr[dq.front()]);
    else
        result.push_back(0);

    return result;
}

int main() {
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<long long> ans = printFirstNegativeInteger(arr, n, k);
    for (auto x : ans) cout << x << " ";
    return 0;
}

