#include <bits/stdc++.h>
#define MAX 2188
using namespace std;
char board[MAX][MAX];

void ft_print(int x, int y, int n){
    if (n == 1){
        board[x][y] = '*';
        return ;
    }
    for (int i =0;i<3;i++){
        for (int j = 0;j<3;j++){
            if (i == 1 && j == 1){
                continue;
            } 
            ft_print(x+i*n/3,y+j*n/3,n/3);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    fill(&board[0][0], &board[N][N], ' ');
    ft_print(0,0,N);
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            cout << board[i][j];
        }
        cout << "\n";
    }

    return 0;
}