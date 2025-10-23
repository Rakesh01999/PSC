#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    map<char, int> freq;
    for (char c : s) freq[c]++;

    int oddCount = 0;
    char oddChar;
    for (auto f : freq) {
        if (f.second % 2 != 0) {
            oddCount++;
            oddChar = f.first;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string first = "", second = "";
    for (auto f : freq)
        first += string(f.second / 2, f.first);
    second = first;
    reverse(second.begin(), second.end());

    if (oddCount)
        cout << first << string(freq[oddChar] % 2 ? 1 : 0, oddChar) << second;
    else
        cout << first << second;
}
