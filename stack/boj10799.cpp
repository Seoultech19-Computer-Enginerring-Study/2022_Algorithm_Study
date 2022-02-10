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

    // 여기서 string의 인덱스로 이전의 괄호를 판단하지 않고 stack.top()을 이용하게 되면 이전 괄호가 아닌 다른 것을 기준으로 삼아 답이 다르게 나온다.
    
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