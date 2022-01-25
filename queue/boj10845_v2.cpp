#include <bits/stdc++.h>
using namespace std;

int q[100000];
int head, tail;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "push")
        {
            cin >> x;
            q[tail++] = x;
        }
        else if (s == "pop")
        {
            if (tail - head <= 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q[head++] << "\n";
            }
        }
        else if (s == "size")
        {
            cout << tail - head << "\n";
        }
        else if (s == "empty")
        {
            if (tail - head <= 0)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if (s == "front")
        {
            if (tail - head <= 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q[head] << "\n";
            }
        }
        else if (s == "back")
        {
            if (tail - head <= 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q[tail - 1] << "\n";
            }
        }
    }

    return 0;
}