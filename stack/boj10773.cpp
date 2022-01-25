#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> stack;
    int k, tmp, sum = 0;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> tmp;

        if (tmp == 0)
        {
            stack.pop();
        }
        else
        {
            stack.push(tmp);
        }
    }
    if (!stack.empty())
    {
        while (stack.size()>0){
            sum += stack.top();
            stack.pop();
        }
    }
    cout << sum;
    return 0;
}