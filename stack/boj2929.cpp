#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);

    string s;
    while (true)
    {
        bool isCorrect = true;
        stack<char> stack;

        getline(cin, s);
        if (s == ".")
        {
            break;
        }
        for (auto c : s)
        {
            if (c == '(' || c == '[')
            {
                stack.push(c);
            }
            else if (c == ')')
            {
                if (stack.empty())
                {
                    isCorrect = false;
                    break;
                }
                else if (stack.top() != '(')
                {
                    isCorrect = false;
                    break;
                }
                stack.pop();
            }
            else if (c == ']')
            {
                if (stack.empty())
                {
                    isCorrect = false;
                    break;
                }
                else if (stack.top() != '[')
                {
                    isCorrect = false;
                    break;
                }
                stack.pop();
            }
        }
        if (!stack.empty())
        {
            isCorrect = false;
        }
        if (isCorrect){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }

    return 0;
}