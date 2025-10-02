#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);

    rep(i, N)
    {
        cin >> S[i];
    }

    int x;
    string y;
    cin >> x >> y;

    cout << (S.at(x - 1) == y ? "Yes" : "No") << endl;
}