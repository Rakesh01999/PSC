#include <iostream>
#include <deque>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string input;cin >> input;
        deque<char> typed;
        deque<int> lower, upper;

        for (int i = 0; i < input.size(); ++i) {
            char ch = input[i];
            if (ch == 'b') {
                if (!lower.empty()) {
                    int idx = lower.back();
                    lower.pop_back();
                    typed[idx] = '#'; 
                }
            } else if (ch == 'B') {
                if (!upper.empty()) {
                    int idx = upper.back();
                    upper.pop_back();
                    typed[idx] = '#'; 
                }
            } else {
                typed.push_back(ch);
                if (islower(ch)) lower.push_back(typed.size() - 1);
                else if (isupper(ch)) upper.push_back(typed.size() - 1);
            }
        }

        for (char c : typed) {
            if (c != '#') cout << c;
        }
        cout <<endl ;
    }


    return 0;
}
