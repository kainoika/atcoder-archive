#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int X, C;
    cin >> X >> C;

    cout << X / (1000 + C) * 1000 << endl;
}