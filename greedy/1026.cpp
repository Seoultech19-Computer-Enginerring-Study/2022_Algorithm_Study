#include <bits/stdc++.h>
using namespace std;
int n;
int a[55];
int b[55];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i] * b[i];
    }
    cout << s;
}