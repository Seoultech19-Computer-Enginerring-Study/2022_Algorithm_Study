#include <bits/stdc++.h>
using namespace std;

int dat[100000];
unsigned int pos;

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
            dat[pos++] = x;
        }
        else if (s == "pop")
        {
            if (!pos)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << dat[--pos] << "\n";
            }
        }
        else if (s == "size")
        {
            cout << pos << "\n";
        }
        else if (s == "empty")
        {
            if (!pos)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if (s == "top")
        {
            if (!pos)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << dat[pos - 1] << "\n";
            }
        }
    }

    return 0;
}