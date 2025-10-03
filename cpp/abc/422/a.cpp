#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    vector<string> stages(64);
    int cnt = 0;

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            stages[cnt] = to_string(i) + "-" + to_string(j);
            cnt++;
        }
    }

    string s;
    cin >> s;

    auto it = find(stages.begin(), stages.end(), s);
    auto index = distance(stages.begin(), it);

    cout << stages[index + 1] << endl;
}