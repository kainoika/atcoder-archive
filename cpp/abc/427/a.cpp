#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string S;
    cin >> S;

    int size = (S.size() + 1) / 2;
    S.erase(size - 1, 1);

    cout << S << endl;
}