
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t ; cin >> t;
    while (t--){
        int n;cin >> n;
        string s, ss;cin >> s >> ss;
        string s1, s2;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                s1.push_back(ss[i]);
                s2.push_back(s[i]);
            }
            else
            {
                s1.push_back(s[i]);
                s2.push_back(ss[i]);
            }
        }

        int zeros1 = 0, zeros2 = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == '0')
            {
                zeros1++;
            }
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == '0')
            {
                zeros2++;
            }
        }

        if (zeros1 >= ceil(s1.size() / 2.0) && zeros2 >= (s2.size() / 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    
    return 0;
}