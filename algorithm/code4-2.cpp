#include <bits/stdc++.h>
using namespace std;

int func(int num)
{

    if (num == 0)
    {
        return 0;
    }

    return num + func(num - 1);
}

int main()
{
    int result = func(5);
    cout << result << endl;
    return 0;
}