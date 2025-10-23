#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s2 = "", newS;
        cin >> s;
        string s1 = "";
        s1 += s[0];
        bool found = false;
        int idx;
        char c;

        if (s.size() == 1)
        {
            if (s[0] == 'a')
                cout << "b" << s << endl;   
            else
                cout << "a" << s << endl;   
        }
        else
        {
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == s[i - 1])
                {
                    idx = i;
                    if (s[i] == 'a')
                        c = 'b';
                    else
                        c = 'a';
                    found = true;
                    break;
                }
                s1 += s[i];
            }

            if (found)
            {
                for (int i = idx; i < s.size(); i++)
                {
                    s2 += s[i];
                }
                newS = s1 + c + s2;
            }
            else
            {
                if (s.back() == 'a')
                    newS = s + "b";
                else
                    newS = s + "a";
            }

            cout << newS << endl;
        }
    }
    return 0;
}