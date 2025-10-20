#include <iostream>
#include <vector>
using namespace std;

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string input;
        cin >> input;

        vector<char> typed;

        for (char ch : input) {
            if (ch == 'b') {
                for (int i = typed.size() - 1; i >= 0; --i) {
                    if (isLower(typed[i])) {
                        typed.erase(typed.begin() + i);
                        break;
                    }
                }
            } else if (ch == 'B') {
                for (int i = typed.size() - 1; i >= 0; --i) {
                    if (isUpper(typed[i])) {
                        typed.erase(typed.begin() + i);
                        break;
                    }
                }
            } else {
                typed.push_back(ch);
            }
        }

        for (char c : typed) cout << c;
        cout << '\n';
    }

    
    return 0;
}
