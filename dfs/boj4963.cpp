#include <bits/stdc++.h>
#define MAX 51
using namespace std;

int board[MAX][MAX];
int vis[MAX][MAX];
int W,H;
int dx[8] = {0,1,0,-1,1,1,-1,-1};
int dy[8] = {1,0,-1,0,1,-1,1,-1};
void dfs(int x, int y){
    for (int i = 0;i<8;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx<0||nx>=W||ny<0||ny>=H) continue;
        if (!board[nx][ny] || vis[nx][ny]) continue;
        vis[nx][ny] = 1;
        dfs(nx,ny);
    }
}

void reset(){
    for (int i = 0;i<MAX;i++){
        for(int j = 0;j<MAX;j++){
            board[i][j] = 0;
            vis[i][j] = 0;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while (1){
        cin >> W >> H;
        int cnt = 0;
        if (!W && !H) break;
        for(int i = 0;i<H;i++){
            for (int j = 0;j<W;j++){
                cin >> board[j][i];
            }
        }
        for (int i = 0;i < H;i++){
            for (int j = 0; j<W;j++){
                if (!board[j][i] || vis[j][i]) continue;
                cnt++;
                dfs(j,i);
                vis[j][i] = 1;
            }
        }
        cout << cnt<<"\n";
        reset();

    }


    return 0;
}