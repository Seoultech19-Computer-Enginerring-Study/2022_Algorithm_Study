#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    stack<char> stack;
    int ret = 0, num = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            num *= 2;
            stack.push(s[i]);
        }
        else if (s[i] == '[')
        {
            num *= 3;
            stack.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (stack.empty() || stack.top() != '(')
            {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '(')
            {
                ret += num;
            }
            stack.pop();
            num/=2;
        }
        else
        {
            if (stack.empty() || stack.top() != '[')
            {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '[')
            {
                ret += num;

            }
            stack.pop();
            num/=3;
        }
    }
    if (stack.empty())
    {
        cout << ret;
    }
    else
    {
        cout << 0;
    }
    return 0;
}