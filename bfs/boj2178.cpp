#include <bits/stdc++.h>
using namespace std;
int board[102][102];
int vis[102][102];
int dist[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j < m; j++){
            board[i][j] = s[j] - '0';
        }
    }
    queue<pair<int, int>> queue;
    queue.push({0,0});
    vis[0][0] = 1;
    dist[0][0] = 1;
    while (!queue.empty()){
        pair<int, int> cur = queue.front();
        queue.pop();
        for (int i = 0; i < 4;i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            if (x < 0 || x >= n || y < 0 || y >= m) continue;
            if (vis[x][y] || board[x][y] != 1) continue;
            queue.push({x,y});
            vis[x][y] = 1;
            dist[x][y] = dist[cur.first][cur.second] + 1;
        }
        
    }
    cout << dist[n - 1][m - 1];
    return 0;
}