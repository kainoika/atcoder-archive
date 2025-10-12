#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N, v;
    cin >> N >> v;
    vector<int> a(N);

    rep(i, N)
    {
        cin >> a[i];
    }

    rep(i, N)
    {
        if (a[i] == v)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}