#include <bits/stdc++.h>
using namespace std;
int dat[51][51];
bool vis[51][51];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int n, m, k;

void reset()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dat[i][j] = 0;
            vis[i][j] = 0;
        }
    }
}
void dfs(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
        if (!dat[nx][ny] || vis[nx][ny]) continue;
        vis[nx][ny] = true;
        dfs(nx, ny);
    }
}

int main()
{
    // ios_b ase::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> m >> n >> k;
        reset();
        while(k--)
        {
            int x, y;
            cin >> x >> y;
            dat[x][y] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dat[i][j] && !vis[i][j])
                {
                    cnt++;
                    vis[i][j] = true;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}