#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;

    set<pair<string, string>> st;

    for (int i = 0; i < n; ++i) {
        string species, color;
        cin >> species >> color;
        st.insert({species, color});
    }

    cout << st.size() <<endl ;

    return 0;
}
