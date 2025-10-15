#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int total = 0;
        for (int i = 1; i <= N; i++) {
            total += i * i;
        }
        cout << total << '\n';
    }
    return 0;
}
