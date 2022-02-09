#include <bits/stdc++.h>
using namespace std;
int n;
int cnt;
int arr[16];

bool isvalid(int x, int y){
    for (int i = 0;i<x;i++){
        // 열 비교. arr에 저장된 값이랑 같으면 중복.
        // 대각선 비교. 기울기 = dy/dx
        if (y == arr[i] || abs(x-i) == abs(arr[i] - y)){
            return (0);
        }
    }
    return (1);
}

void nqueen(int cur){
    if (cur == n){
        cnt++;
        return;
    }
    for (int i = 0;i<n;i++){ // 행 탐색
        if (isvalid(cur, i)){ // 조건 만족하면 계속 탐색. x:cur-행, y:i-열
            arr[cur] = i;
            nqueen(cur + 1);
        }
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    nqueen(0);
    cout << cnt;
    return 0;
}