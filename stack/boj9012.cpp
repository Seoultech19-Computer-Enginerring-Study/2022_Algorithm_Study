#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);

    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        bool isValid = true;
        stack<char> stack;

        for (auto c : s)
        {
            if (c == '(')
            {
                stack.push(c);
            }
            else if (c == ')')
            {
                if (stack.empty())
                {
                    isValid = false;
                    break;
                }
                else if (stack.top() != '(')
                {
                    isValid = false;
                    break;
                }
                stack.pop();
            }
        }
        if (!stack.empty())
        {
            isValid = false;
        }
        if (isValid)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}