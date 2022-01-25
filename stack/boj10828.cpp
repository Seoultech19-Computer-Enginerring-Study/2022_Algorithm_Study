#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> stack;
    int n, x;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> s;

        if (s == "push")
        {
            cin >> x;
            stack.push(x);
        }
        else if (s == "pop")
        {
            if (stack.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                int tmp = stack.top();
                stack.pop();
                cout << tmp << "\n";
            }
        }
        else if (s == "size")
        {
            cout << stack.size() << "\n";
        }
        else if (s == "empty")
        {
            if (stack.empty())
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
            if (stack.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << stack.top() << "\n";
            }
        }
    }

    return 0;
}