#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        edges.emplace_back(u, v);
    }

    int ans = m;
    for (int s = 0; s < (1 << n); s++)
    {
        vector<int> color(n);
        for (int i = 0; i < n; i++)
        {
            color[i] = s >> i & 1;
            int now = 0;
            for (auto [u, v] : edges)
            {
                if (color[u] == color[v])
                    now++;
            }
            ans = min(ans, now);
        }
    }
    cout << ans << endl;
}