#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int len = 0;

    len += (x / (a + b)) * a;
    len += min(x % (a + b), a);

    int ans = len * s;
    cout << ans << "\n";

    return 0;
}