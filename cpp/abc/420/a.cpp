#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    int ans;
    ans = (x + y) % 12;

    if (ans == 0)
    {
        ans = 12;
    }

    cout << ans << endl;
}