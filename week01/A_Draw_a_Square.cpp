#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int arr[5];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        bool possible = true;
        for (int i = 1; i < 4; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                possible = false;
            }
        }

        if (!possible)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
