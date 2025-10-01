#include <iostream>
#include <queue>
using namespace std;

// ヒープと優先度付きキュー
int main()
{
    int q;
    cin >> q;

    // Min-heap
    priority_queue<int, vector<int>, greater<int>> pq;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else
        {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
}