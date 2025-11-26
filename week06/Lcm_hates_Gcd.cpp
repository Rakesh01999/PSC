 
 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long A, B;
        cin >> A >> B;
        long long g = __gcd(A, B);
        cout << A - g << "\n";
    }
    return 0;
}

