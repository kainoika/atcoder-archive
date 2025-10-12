// トリボナッチ数列
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<long long> F(50);
    F[0] = 0;
    F[1] = 0;
    F[2] = 1;

    for (int N = 3; N < 50; N++)
    {
        F[N] = F[N - 1] + F[N - 2] + F[N - 3];
        cout << N << "項目：" << F[N] << endl;
    }
}