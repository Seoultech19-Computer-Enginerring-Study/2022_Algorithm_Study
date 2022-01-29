#include <bits/stdc++.h>
using namespace std;
int board[1001][1001];
int date[1001][1001];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m, mx = 0;
    queue<pair<int, int>> queue;

    cin >> m >> n;

    for (int i = 0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> board[i][j];
            if (board[i][j] == 1){
                queue.push({i,j});
            }
            if (board[i][j] == 0){
                date[i][j] = -1;
            }
        }
    }

    while (!queue.empty()){
        pair<int, int> cur = queue.front();
        queue.pop();
        for (int i = 0; i<4;i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            if (x < 0 || x >= n || y < 0 || y >= m) continue;
            if (date[x][y] >= 0 || board[x][y] == -1) continue;
            queue.push({x,y});
            date[x][y] = date[cur.first][cur.second] + 1;
            mx = max(date[x][y], mx);
        }
    }
    
    for (int i = 0;i<n;i++){
        for (int j=0;j<m;j++){
            if (date[i][j] == -1){
                cout << -1;
                return 0;
            }
        }
    }
    cout << mx;


    return 0;
}