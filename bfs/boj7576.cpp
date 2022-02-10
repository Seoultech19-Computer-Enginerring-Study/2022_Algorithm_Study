#include <bits/stdc++.h>
using namespace std;
// 상자에 담긴 각 토마토의 상태
int board[1001][1001];
// 각 토마토가 익을 때까지의 최소 날짜
int date[1001][1001];

// bfs를 시행할 상하좌우 네 방향
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // input - n,m
    // output - mx
    int n,m, mx = 0;
    queue<pair<int, int>> queue;
    cin >> m >> n;

    // 입력 값 = 각 상자의 토마토 상태
    for (int i = 0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> board[i][j];
            // 모든 익은 토마토를 시작점으로 잡고 큐에 넣어서 bfs 실행. 어차피 큐에 쌓이는 순서는 거리 순.
            if (board[i][j] == 1){
                queue.push({i,j});
            }
            // 익지 않은 토마토는 date를 -1로 해서 방문 여부 판단.
            if (board[i][j] == 0){
                date[i][j] = -1;
            }
        }
    }

    while (!queue.empty()){
        pair<int, int> cur = queue.front();
        queue.pop();
        // 현재 위치의 상하좌우에 대해 조건 판단.
        for (int i = 0; i<4;i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            // 상자 범위 벗어나거나 이미 방문했거나 토마토가 없는 곳은 지나간다.
            if (x < 0 || x >= n || y < 0 || y >= m) continue;
            if (date[x][y] >= 0 || board[x][y] == -1) continue;
            queue.push({x,y});
            // 익는 날짜는 하루씩 증가함으로 현재 위치의 익는 날짜 + 1
            date[x][y] = date[cur.first][cur.second] + 1;
            // 토마토가 모두 익어야 하므로 가장 많은 일자를 고른다.
            mx = max(date[x][y], mx);
        }
    }
    
    for (int i = 0;i<n;i++){
        for (int j=0;j<m;j++){
            // 만일 익는 날짜가 -1로 되어 있다면 모든 토마토가 익은 게 아니므로 -1 출력 후 종료.
            if (date[i][j] == -1){
                cout << -1;
                return 0;
            }
        }
    }
    //아니면 가장 많은 일자 출력.
    cout << mx;


    return 0;
}