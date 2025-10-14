#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int f(int x)
{
    int res = 0;
    for (char c : to_string(x))
        res += c - '0';
    return res;
}

int main()
{
    int N;
    cin >> N;

    vector<int> a(N + 1);
    a[0] = 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            a[i] += f(a[j]);
        }
    }

    cout << a[N] << endl;
}