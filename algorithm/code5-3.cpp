// 動的計画法（Frog問題）
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

template <class T>
void chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
    }
}

int main()
{
    int N;
    long long W;
    cin >> N >> W;

    vector<long long> weight(N), value(N);

    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> value[i];
    }

    // DPテーブル定義
    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    rep(i, N)
    {
        rep(w, W + 1)
        {
            if (w - weight[i] >= 0)
            {
                chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
            }

            chmax(dp[i + 1][w], dp[i][w]);
        }
    }

    cout << dp[N][W] << endl;
}
