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

    auto it = find(a.begin(), a.end(), v);

    if (it != a.end())
    {
        cout << distance(a.begin(), it) << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}