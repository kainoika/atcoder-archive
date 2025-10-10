#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    cin >> S;

    sort(S.begin(), S.end());
    if (S[0] != S[1])
    {
        cout << S[0] << endl;
    }
    else
    {
        cout << S.back() << endl;
    }
}