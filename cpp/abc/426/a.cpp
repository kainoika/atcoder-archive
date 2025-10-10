#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> Versions = {
        "Ocelot",
        "Serval",
        "Lynx",
    };

    string X, Y;
    cin >> X >> Y;

    auto itX = find(Versions.begin(), Versions.end(), X);
    auto itY = find(Versions.begin(), Versions.end(), Y);

    if (itY <= itX)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
