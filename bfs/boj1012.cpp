#include <bits/stdc++.h>
using namespace std;
int board[51][51];
int vis[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, m, n, k, x, y, cnt = 0;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        cin >> m >> n >> k;
        queue<pair<int, int>> queue;
        for (int h = 0; h < k; h++)
        {
            cin >> x >> y;
            board[x][y] = 1;
            queue.push({x,y});
            vis[x][y] = 1;
        }
        while(!queue.empty()){
            pair<int,int> cur = queue.front();
            queue.pop();
            cnt++;
            for (int i = 0; i < 4; i++){
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (board[nx][ny] == 0 || vis[nx][ny] == 1) continue;
                queue.push({nx,ny});
                vis[nx][ny] = 1;
            }
        }
        for (int i = 0;i<51;i++){
            for (int j = 0;j<51;j++){
                board[i][j] = 0;
                vis[i][j] = 0;
            }
        }
        cout << cnt << "\n";

    }
    return 0;
}