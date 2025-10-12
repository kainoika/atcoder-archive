// フィボナッチ数列(メモ化)
#include <bits/stdc++.h>
using namespace std;

vector<long long> memo;

int fibo(int N)
{
    if (N <= 1)
    {
        return N;
    }
    if (memo[N] != -1)
    {
        return memo[N];
    }

    return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main()
{
    memo.assign(50, -1);

    fibo(49);

    for (int N = 2; N < 50; N++)
    {
        cout << memo[N] << endl;
    }
}