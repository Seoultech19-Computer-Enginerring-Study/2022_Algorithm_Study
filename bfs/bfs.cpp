#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[502][502] =
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} }; // 1이 파란 칸, 0이 빨간 칸에 대응
bool vis[502][502]; // 해당 칸을 방문했는지 여부를 저장
int n = 7, m = 10; // n = 행의 수, m = 열의 수
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1}; // 상하좌우 네 방향을 의미

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    queue<pair<int, int>> queue;
    vis[0][0] = 1;
    queue.push({0,0});
    while (!queue.empty()){
        pair<int, int> cur = queue.front();
        queue.pop();
        cout << "("<<cur.X<<", "<<cur.Y<<") -> ";
        for (int i = 0;i<4;i++){
            int x = cur.X + dx[i];
            int y = cur.Y + dy[i];
            if (x < 0 || x >= n || y < 0 || y >= m) continue;
            if (vis[x][y] || board[x][y] == 0) continue;
            vis[x][y] = 1;
            queue.push({x,y});
        }
    }

    return 0;
}