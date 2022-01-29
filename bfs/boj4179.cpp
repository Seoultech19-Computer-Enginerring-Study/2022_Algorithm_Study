#include <bits/stdc++.h>
using namespace std;
char board[1001][1001];
int distFire[1001][1001];
int distJH[1001][1001];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int r,c;
    string s;
    cin >> r >> c;
    for (int i = 0; i < r; i++){
        cin >> s;
        for (int j = 0; j < c; j++){
            board[i][j] = s[j];
            distFire[i][j] = -1;
            distJH[i][j] = -1;
        }
    }
    queue<pair<int, int>> jh;
    queue<pair<int,int>> queue;
    
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (board[i][j] == 'F'){
                queue.push({i, j});
                distFire[i][j] = 0;
            }
            if (board[i][j] == 'J'){
                jh.push({i,j});
                distJH[i][j] = 0;
            }
        }
    }

    while(!queue.empty()){
        pair<int, int> cur = queue.front();
        queue.pop();
        for (int i = 0;i<4;i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            if (x < 0 || x >= r || y < 0 || y >= c) continue;
            if (board[x][y] == '#' || distFire[x][y] >= 0) continue;
            queue.push({x,y});
            distFire[x][y] = distFire[cur.first][cur.second] + 1;
        }
    }
    while(!jh.empty()){
        pair<int, int> cur = jh.front();
        jh.pop();
        for (int i = 0; i < 4; i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            if (x < 0 || x >= r || y < 0 || y >= c){
                cout << distJH[cur.first][cur.second] + 1;
                return 0;
            }
            if (board[x][y] == '#' || distJH[x][y] >= 0) continue;
            if (distFire[x][y] != -1 && distFire[x][y] <= distJH[cur.first][cur.second] + 1) continue;
            jh.push({x,y});
            distJH[x][y] = distJH[cur.first][cur.second] + 1;
        }    
    }
    cout << "IMPOSSIBLE";
    return 0;
}