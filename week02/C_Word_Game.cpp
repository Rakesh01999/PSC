#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--) {
        int n ;cin >> n;

        vector<set<string>> players(3);
        
        map<string, int> wordCount;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < n; ++j) {
                string word;
                cin >> word;
                players[i].insert(word);
                wordCount[word]++;
            }
        }

        vector<int> score(3, 0);

        for (int i = 0; i < 3; ++i) {
            for (const string& word : players[i]) {
                if (wordCount[word] == 1) score[i] += 3;
                else if (wordCount[word] == 2) score[i] += 1;
            }
        }

        cout << score[0] << " " << score[1] << " " << score[2] << endl ;
    }


    return 0;
}
