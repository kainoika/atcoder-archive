#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);

    rep(i, N)
    {
        cin >> a[i];
    }

    // 配列の中から最小値を求める
    int min = *min_element(a.begin(), a.end());

    cout << min << endl;
}