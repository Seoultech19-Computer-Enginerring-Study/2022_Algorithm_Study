#include <bits/stdc++.h>
#define MAX 26
using namespace std;
int board[MAX][MAX];
int vis[MAX][MAX];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int N;
int totCnt;
vector<int> cntVec;
int cnt;

void dfs(int x, int y){
    for (int i = 0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx<0||nx>=N || ny < 0 || ny >= N) continue;
        if (!board[nx][ny] || vis[nx][ny]) continue;
        vis[nx][ny] = 1;
        cnt++;
        dfs(nx,ny);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for (int i = 0;i<N;i++){
        string s;
        cin >> s;
        for (int j = 0;j<N;j++){
            board[i][j] = s[j] - '0';
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (!board[i][j] || vis[i][j]) continue;
            vis[i][j] = 1;
            cnt = 1;
            dfs(i, j);
            cntVec.push_back(cnt);
            totCnt++;
        }
    }
    cout << totCnt<<"\n";
    sort(cntVec.begin(), cntVec.end());
    for (int i = 0;i<cntVec.size();i++){
        cout << cntVec[i]<<"\n";
    }
    return 0;
}