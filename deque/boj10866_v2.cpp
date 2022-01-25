#include <bits/stdc++.h>
#define MX 1000000
using namespace std;

int dq[2 * MX + 1];
int head = MX, tail = MX;
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
        if (s == "push_front")
        {
            cin >> x;
            dq[--head] = x;
        }
        else if (s == "push_back")
        {
            cin >> x;
            dq[tail++] = x;
        }
        else if (s == "pop_front")
        {
            if (tail - head <= 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << dq[head++] << "\n";
            }
        }
        else if (s == "pop_back")
        {
            if (tail - head <= 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << dq[--tail] << "\n";
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
                cout << dq[head] << "\n";
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
                cout << dq[tail - 1] << "\n";
            }
        }
    }

    return 0;
}