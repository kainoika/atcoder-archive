// 部分和集合　再帰関数
#include <bits/stdc++.h>
using namespace std;

int func(int i, int w, vector<int> &a)
{
    if (i == 0)
    {
        if (w == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // a[i - 1]を選ばない場合
    if (func(i - 1, w, a))
        return true;

    // a[i - 1]を選ぶ場合
    if (func(i - 1, w - a[i - 1], a))
        return true;

    return false;
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> a(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    if (func(N, M, a))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
