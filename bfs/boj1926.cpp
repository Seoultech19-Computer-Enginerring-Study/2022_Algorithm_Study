#include <bits/stdc++.h>
using namespace std;
int board[502][502];
int vis[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, mx = 0;
    cin >> n >> m;
    
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            cin >> board[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (board[i][j] == 0|| vis[i][j] == 1) continue;
            cnt++;
            int area = 1;
            queue<pair<int, int>> queue;
            vis[i][j] = 1;
            queue.push({i,j});
            while (!queue.empty()){
                pair<int, int> cur = queue.front();
                queue.pop();

                for (int i = 0;i<4;i++){
                    int x = cur.first + dx[i];
                    int y = cur.second + dy[i];
                    if (x < 0 || x >= n || y < 0 || y >= m) continue;
                    if (vis[x][y] || board[x][y] != 1) continue;
                    vis[x][y] = 1;
                    queue.push({x,y});
                    area++;
                }
            }
            mx = max(area, mx);
        }
    }
    cout << cnt<<"\n"<<mx;


    return 0;
}