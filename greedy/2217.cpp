#include <bits/stdc++.h>
using namespace std;
int n;
int w[1000005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    sort(w, w + n);
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = max(result, w[i] * (n - i));
    }
    cout << result;
}