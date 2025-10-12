#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);

    rep(i, N)
    {
        cin >> a[i];
    }

    rep(i, N)
    {
        cin >> b[i];
    }

    int min_value = INT_MAX;
    rep(i, N)
    {
        rep(j, N)
        {
            if (a[i] + b[j] < K)
            {
                continue;
            }

            if (a[i] + b[j] < min_value)
            {
                min_value = a[i] + b[j];
            }
        }
    }

    cout << min_value << endl;
}