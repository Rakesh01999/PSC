#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<tuple<long long, long long, int>> customers(n);
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        customers[i] = make_tuple(a, b, i);
    }

    sort(customers.begin(), customers.end());

    priority_queue<
        pair<long long, int>,
        vector<pair<long long, int>>,
        greater<pair<long long, int>>
    > pq;

    vector<int> room(n);
    int room_count = 0;

    for (auto &c : customers) {
        long long a = get<0>(c);
        long long b = get<1>(c);
        int idx = get<2>(c);

        if (!pq.empty() && pq.top().first < a) {
            auto top = pq.top();
            pq.pop();

            room[idx] = top.second;
            pq.push({b, top.second});
        } else {
            
            room_count++;
            room[idx] = room_count;
            pq.push({b, room_count});
        }
    }

    cout << room_count << '\n';
    for (int i = 0; i < n; i++) {
        cout << room[i] << ' ';
    }
    cout << '\n';

    
    return 0;
}
