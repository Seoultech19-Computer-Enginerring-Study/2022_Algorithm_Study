#include <bits/stdc++.h>
#define MAX 129
using namespace std;
int paper[MAX][MAX];
int cnt[2];

bool check(int x, int y, int n){
    for (int i = x; i < n + x; i++){
        for (int j = y; j < n + y; j++){
            if (paper[i][j] != paper[x][y]){
                return false;
            }
        }
    }
    return true;
}

void func(int x, int y, int n){
    if (check(x,y,n)){
        cnt[paper[x][y]]++;
        return;
    }
    func(x, y, n/2);
    func(x, y + n/2, n/2);
    func(x + n/2, y, n/2);
    func(x + n/2,y + n/2, n/2);
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
    func(0,0, n);
    for (int i = 0;i<2;i++){
        cout << cnt[i]<<"\n";
    }
    return 0;
}