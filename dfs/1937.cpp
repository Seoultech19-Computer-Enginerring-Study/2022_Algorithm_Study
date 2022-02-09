#include <bits/stdc++.h>
#define MAX 505
using namespace std;
int board[MAX][MAX];
int dp[MAX][MAX];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int n;
int dfs(int x, int y)
{
    int mx = 0;
    if (dp[x][y])
        return dp[x][y];
    for (int dir = 0; dir < 4; dir++)
    {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            continue;
        if (board[nx][ny] <= board[x][y])
            continue;
        mx = max(mx, dfs(nx, ny));
    }
    dp[x][y] = mx + 1;
    return mx + 1;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mx = max(mx, dfs(i, j));
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << mx;
}