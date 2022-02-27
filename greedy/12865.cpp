#include <bits/stdc++.h>
using namespace std;
int n, k;
int dp[105][100005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    vector<pair<int, int>> V;
    V.push_back({0, 0});
    for (int i = 1; i <= n; i++)
    {
        int w, v;
        cin >> w >> v;
        V.push_back({w, v});
    }
    for (int i = 1; i <= n; i++)
    {
        int w = V[i].first;
        int v = V[i].second;
        for (int j = 0; j <= k; j++)
        {
            if (j < V[i].first)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w] + v);
        }
    }
    cout << dp[n][k];
}