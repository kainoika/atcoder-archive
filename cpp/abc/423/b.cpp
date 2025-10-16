#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n) cin >> l[i];

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (l[i] == 1)
        {
            x = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (l[i] == 1)
        {
            y = i;
            break;
        }
    }

    cout << y - x << '\n';
}