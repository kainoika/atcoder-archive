#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> S(n);
    rep(i, n)
    {
        cin >> S.at(i);
    }

    vector<int> point(n);
    rep(i, m)
    {
        int cnt = 0;
        rep(j, n)
        {
            int v = S.at(j).at(i) - '0';
            cnt += v;
        }

        if (cnt <= n / 2)
        {
            rep(j, n)
            {
                if (S.at(j).at(i) == '1')
                {
                    point.at(j)++;
                }
            }
        }
        else
        {
            rep(j, n)
            {
                if (S.at(j).at(i) == '0')
                {
                    point.at(j)++;
                }
            }
        }
    }

    int mx = 0;
    rep(i, n)
    {
        mx = max(mx, point.at(i));
    }
    rep(i, n)
    {
        if (point.at(i) == mx)
        {
            cout << i + 1 << ' ';
        }
    }
}