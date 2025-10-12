#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 3;
    vector<string> items = {"A", "B", "C"};

    for (int bit = 0; bit < (1 << N); bit++)
    {
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i))
            {
                cout << items[i] << " ";
            }
        }
        cout << endl;
    }
}
