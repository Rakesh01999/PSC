#include <bits/stdc++.h>
using namespace std;

int countAnagrams(string txt, string pat) {
    int n = txt.size(), m = pat.size();
    if (m > n) return 0;

    vector<int> freqPat(26, 0), freqWin(26, 0);
    for (char c : pat) freqPat[c - 'a']++;

    int count = 0;

    // first window
    for (int i = 0; i < m; i++)
        freqWin[txt[i] - 'a']++;

    if (freqWin == freqPat) count++;

    // slide window
    for (int i = m; i < n; i++) {
        freqWin[txt[i] - 'a']++;         // add new char
        freqWin[txt[i - m] - 'a']--;     // remove old char
        if (freqWin == freqPat) count++;
    }

    return count;
}

int main() {
    string txt, pat;
    cin >> txt >> pat;
    cout << countAnagrams(txt, pat);
    return 0;
}
