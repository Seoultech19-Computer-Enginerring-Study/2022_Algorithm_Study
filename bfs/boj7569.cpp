#include <bits/stdc++.h>
using namespace std;
int board[101][101][101];
int date[101][101][101];
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m,h, mx = 0;
    queue<tuple<int, int, int>> queue;

    cin >> m >> n >> h;

    for (int k = 0;k<h;k++){
        for (int i = 0;i<n;i++){
            for (int j=0;j<m;j++){
                cin >> board[i][j][k];
                if (board[i][j][k] == 1){
                    queue.push({i,j,k});
                }
                if (board[i][j][k] == 0){
                    date[i][j][k] = -1;
                }
            }
        }
    }
    

    while (!queue.empty()){
        tuple<int, int, int> cur = queue.front();
        queue.pop();
        for (int i = 0; i<6;i++){
            int x = get<0>(cur) + dx[i];
            int y = get<1>(cur) + dy[i];
            int z = get<2>(cur) + dz[i];

            if (x < 0 || x >= n || y < 0 || y >= m || z < 0 || z >= h) continue;
            if (date[x][y][z] >= 0 || board[x][y][z] == -1) continue;
            queue.push({x,y,z});
            date[x][y][z] = date[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            mx = max(date[x][y][z], mx);
        }
    }
    
    for (int i = 0;i<n;i++){
        for (int j=0;j<m;j++){
            for (int k = 0;k<h;k++){
                if (date[i][j][k] == -1){
                    cout << -1;
                    return 0;
                }
            }
        }
    }
    cout << mx;


    return 0;
}