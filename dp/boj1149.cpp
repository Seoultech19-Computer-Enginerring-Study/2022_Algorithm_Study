#include <bits/stdc++.h>
using namespace std;
int d[1002][3];
int r[1002], g[1002], b[1002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i<n;i++){
        cin >> r[i] >> g[i] >> b[i];
    }
    d[0][0] = r[0];
    d[0][1] = g[0];
    d[0][2] = b[0];
    for (int i = 1; i < n; i++)
    {
        d[i][0] = min(d[i - 1][1], d[i - 1][2]) + r[i];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + g[i];
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + b[i];
    }
    // cout << *min_element(d[n-1], d[n-1]+3);
    cout << min({d[n-1][0], d[n-1][1], d[n-1][2]});
    return 0;
}