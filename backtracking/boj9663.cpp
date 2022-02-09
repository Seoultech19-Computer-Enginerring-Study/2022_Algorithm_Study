#include <bits/stdc++.h>
using namespace std;
int n;
int cnt;
int arr[16];
int isused1[50]; // 열
int isused2[50]; // 좌하단-우상단 대각선
int isused3[50]; // 좌상단-우하단 대각선

void nqueen(int cur){
    if (cur == n){
        cnt++;
        return;
    }
    for (int i = 0;i<n;i++){
        if (!isused1[i] && !isused2[cur + i] && !isused3[cur-i+n-1]){
            arr[cur] = i;
            isused1[i] = true;
            isused2[cur + i] = true;
            isused3[cur-i+n-1] = true;
            nqueen(cur + 1);
            isused1[i] = false;
            isused2[cur + i] = false;
            isused3[cur-i+n-1] = false;
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