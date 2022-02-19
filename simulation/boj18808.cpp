#include <bits/stdc++.h>
using namespace std;
int board[42][42];
int sticker[42][42];
int N, M, K, R,C, cnt;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

bool check(int x, int y){
    for (int i = 0;i<R;i++){
        for (int j = 0;j<C;j++){
            if (board[x+i][y+j] == 1 && sticker[i][j] == 1){
                return false;
            }
        }
    }
    for (int i = 0;i<R;i++){
        for (int j = 0;j<C;j++){
            if (sticker[i][j] == 1){
                board[x+i][y+j] = 1;
            }
        }
    }
    return true;
}

void rotate(){
    int tmp[42][42];

    for (int i = 0;i<R;i++){
        for (int j = 0;j<C;j++){
            tmp[i][j] = sticker[i][j];
        }
    }
    for (int i = 0;i<R;i++){
        for (int j = 0;j<C;j++){
            sticker[j][R-i-1] = tmp[i][j];
        }
    }
    int t = R;
    R = C;
    C = t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N>>M>>K;
    while(K--){
        cin >> R >> C;
        for (int i = 0;i<R;i++){
            for (int j = 0;j<C;j++){
                cin >> sticker[i][j];
            }
        }
        for(int i = 0;i<4;i++){
            bool is_filled = false;
            for (int x = 0;x<=N-R;x++){
                if (is_filled) break;
                for (int y = 0;y<=M-C;y++){
                    if (check(x,y)){
                        is_filled = true;
                        break;
                    }
                }
            }
            if (is_filled) break;
            rotate();
        }
    }
    for (int i = 0;i<N;i++){
        for (int j = 0;j<M;j++){
            if (board[i][j]){
                cnt++;
            }
        }
    }
    cout << cnt;


    return 0;
}