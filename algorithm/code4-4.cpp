// ユークリッドの互除法
// 2つの整数の最大公約数を求めるアルゴリズム
#include <bits/stdc++.h>
using namespace std;

int GCD(int m, int n)
{
    if (n == 0)
    {
        return m;
    }

    return GCD(n, m % n);
}

int main()
{
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
    cout << GCD(24, 18) << endl;
}