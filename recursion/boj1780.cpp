#include <bits/stdc++.h>
#define MAX 2188
using namespace std;
int cnt[3];
int paper[MAX][MAX];

bool check(int x, int y, int n){
    for (int i = x; i < n + x; i++){
        for (int j = y; j < n + y; j++){
            if (paper[x][y] != paper[i][j]){
                return false;
            }
        }
    }
    return true;
}

void func(int x, int y, int n){
    if(check(x,y,n)){
        cnt[paper[x][y] + 1]++;
        return ;
    }
    for (int i = 0;i<3;i++){
        for (int j = 0;j<3;j++){
            func(x+n/3*i, y+n/3*j, n/3);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            cin >> paper[i][j];
        }
    }
    func(0, 0, n);
    for (int i = 0;i<3;i++){
        cout << cnt[i]<<'\n';
    }

    return 0;
}