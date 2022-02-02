#include <bits/stdc++.h>
#define MAX 101
using namespace std;
char board[MAX][MAX];
bool vis[MAX][MAX];
int N;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int cnt[3];

void dfs(int x, int y){
    for (int i = 0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
        if (board[x][y] != board[nx][ny] || vis[nx][ny]) continue;
        vis[nx][ny] = 1;
        dfs(nx,ny);
    }    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    int ret = 0, rgRet = 0;
    for (int i = 0;i<N;i++){
        string s;
        cin >> s;
        for (int j = 0;j<N;j++){
            board[i][j] = s[j];
            
        }
    }
    for (int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(!vis[i][j]){
                vis[i][j] = 1;
                ret++;
                dfs(i,j);
            }
        }
    }

    for (int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(board[i][j]=='R'){
                board[i][j] = 'G';
            }
            vis[i][j] = 0;
        }
    }
    for (int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(!vis[i][j]){
                vis[i][j] = 1;
                rgRet++;
                dfs(i,j);
            }
        }
    }
    cout << ret << " "<<rgRet;
    return 0;
}