#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int ret[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    stack<int> stack;
    for (int i = n - 1; i >= 0; i--)
    {

        while (!stack.empty() && stack.top() <= a[i])
        {
            stack.pop();
        }

        if (stack.empty())
        {
            ret[i] = -1;
        }
        else
        {
            ret[i] = stack.top();
        }
        stack.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ret[i] << " ";
    }

    return 0;
}