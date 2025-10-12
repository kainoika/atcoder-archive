// トリボナッチ数列(メモ化)
#include <bits/stdc++.h>
using namespace std;

vector<long long> memo;

long long fibo(int N)
{
    if (N == 0)
        return 0;
    if (N == 1 || N == 2)
        return 1;

    if (memo[N] != -1)
        return memo[N];

    memo[N] = fibo(N - 1) + fibo(N - 2) + fibo(N - 3);
    return memo[N];
}

int main()
{
    memo.assign(50, -1);
    fibo(49);

    for (int N = 3; N < 50; N++)
    {
        cout << memo[N] << endl;
    }
}