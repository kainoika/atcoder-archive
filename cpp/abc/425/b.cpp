#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    vector<int> cnt(N + 1);
    rep(i, N)
    {
        if (a[i] != -1)
            cnt[a[i]]++;
    }

    rep(i, N)
    {
        if (a[i] == -1)
        {
            for (int j = 1; j <= N; j++)
            {
                if (cnt[j] == 0)
                {
                    a[i] = j;
                    cnt[j]++;
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        if (cnt[i] != 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    rep(i, N) cout << a[i] << ' ';
    cout << endl;
    return 0;
}