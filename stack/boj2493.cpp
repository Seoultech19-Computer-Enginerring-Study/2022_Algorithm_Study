#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    stack<pair<int, int>> stack;
    cin >> n;

    stack.push({100000001, 0});
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;

        while (!stack.empty() && stack.top().first < t)
        {
            stack.pop();
        }
        cout << stack.top().second << " ";
        stack.push({t, i});
    }
    return 0;
}