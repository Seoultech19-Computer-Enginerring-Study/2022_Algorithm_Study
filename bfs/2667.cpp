#include<bits/stdc++.h>
#define MAX 30

using namespace std;

int dx[4] = {0, 1, 0 ,-1};
int dy[4] = {1, 0, -1, 0};

int n;
bool vis[MAX][MAX] = { false };
char board[MAX][MAX];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count = 0;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        for(int j=0;j<n; j++){
            cin>>board[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0;j<n; j++){
            if(vis[i][j]) continue;
            if(board[i][j]=='0') continue;
            vis[i][j] = true;
            queue<pair<int, int> > Q;
            Q.push(make_pair(i, j));
            count++;
            int cnt = 1;
            while(!Q.empty()) {
                pair<int, int> cur = Q.front();
                Q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    // 범위 검사
                    if(nx<0||nx>=n||ny<0||ny>=n) continue;
                    // 방문 여부 검사
                    if(vis[nx][ny]) continue;
                    if(board[nx][ny]=='0') continue;
                    vis[nx][ny] = true;
                    Q.push(make_pair(nx, ny));
                    cnt++;
                }
            }
            v.push_back(cnt);
        }
    }
    sort(v.begin(), v.end());
    cout<<count<<'\n';
    for(auto a : v) cout<<a<<'\n';
}