#include <bits/stdc++.h>
using namespace std;
int n, m;
bool arr[10001][10001] = {false};
int dist[10001];
bool vis[10001] = {false};
void dfs(int com)
{
    vis[com] = true;
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!arr[com][i])
            continue;
        if (!vis[i])
            dfs(i);
        mx = max(mx, dist[i]);
    }
    dist[com] = mx + 1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[b][a] = true;
    }
    vector<pair<int, int> > v;
    for (int i = 1; i <= n; i++)
    {
        // memset(vis, false, sizeof(vis));
        dfs(i);
        v.push_back(make_pair(dist[i], i));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[n - 1].first)
            cout << v[i].second << ' ';
    }
}