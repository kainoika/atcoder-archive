#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<char> t(n);

    rep(i, n)
    {
        if (s[i] == '#')
        {
            cout << '#';
        }
        else if (i == 0 || s[i - 1] == '#')
        {
            cout << 'o';
        }
        else
        {
            cout << '.';
        }
    }
    cout << endl;
}