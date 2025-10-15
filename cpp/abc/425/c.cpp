// TLE後で直す
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < Q; i++)
    {
        int query;
        cin >> query;

        if (query == 1)
        {
            int c;
            cin >> c;

            for (int j = 0; j < c; j++)
            {
                A.push_back(A.front());
                A.erase(A.begin());
            }
        }
        else
        {
            int l, r;
            cin >> l >> r;

            int ans = 0;
            for (int j = l; j <= r; j++)
            {
                ans += A[j - 1];
            }
            cout << ans << endl;
        }
    }
}