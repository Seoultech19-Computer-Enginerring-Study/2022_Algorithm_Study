#include <bits/stdc++.h>
using namespace std;
int d[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;
    d[0] = 0;
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    for (int j = 4; j < 11; j++)
    {
        d[j] = d[j - 1] + d[j - 2] + d[j - 3];
    }
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << d[n] << '\n';
    }

    return 0;
}