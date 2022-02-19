#include <bits/stdc++.h>
using namespace std;

int board[10][10];
int check[10][10];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int n,m,mn = 5000;
vector<pair<int, int>> cctv;

void change(int x, int y, int dir){
    dir %= 4;
    while(1){
        x += dx[dir];
        y += dy[dir];
        if (x<0||x>=n||y<0||y>=m||check[x][y] == 6) break;
        if (check[x][y] != 0) continue;
        check[x][y] = -1;
    }
    return ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n>>m;
    for (int i =0 ;i<n;i++){
        for (int j = 0;j<m;j++){
            cin >> board[i][j];
            if (board[i][j] != 0 && board[i][j] != 6){
                cctv.push_back({i,j});
            }
        }
    }
    for (int i = 0;i<(pow(4, cctv.size()));i++){
        for (int k = 0;k<n;k++){
            for (int l = 0;l<m;l++){
                check[k][l] = board[k][l];
            }
        }
        int tmp = i;
        for (int j = 0;j<cctv.size();j++){
            int dir = tmp%4;
            tmp/=4;
            int x = cctv[j].first;
            int y = cctv[j].second;
            if (board[x][y] == 1){
                change(x, y, dir);
            }
            else if (board[x][y] == 2){
                change(x, y, dir);
                change(x, y, dir+2);                
            }
            else if (board[x][y] == 3){
                change(x, y, dir);
                change(x, y, dir+1);                
            }
            else if (board[x][y] == 4){
                change(x, y, dir);
                change(x, y, dir+1);                
                change(x, y, dir+2);                
            }    
            else {
                change(x, y, dir);
                change(x, y, dir+1);                
                change(x, y, dir+2);                
                change(x, y, dir+3);                
            }        
        }
        int cnt = 0;
        for (int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if (check[i][j] == 0){
                    cnt++;
                }
            }
        }
        mn = min(mn, cnt);
    }
    cout << mn;

    return 0;
}
