#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);

    string s;

    cin >> s;
    int cnt = 0, sum = 0;
    stack<char> stack;

    for (int i = 0;i<s.size();i++)
    {
        if (s[i] == '(')
        {
            stack.push(s[i]);
        }
        else
        {
            // ()인 경우로 레이저 의미
            if (s[i-1] == '(')
            {
                stack.pop();
                cnt += stack.size();
            }
            // ))인 경우로 막대 의미
            else
            {
                stack.pop();
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}