#include <bits/stdc++.h>
using namespace std;
// void hanoiTower(int from, int to, int n){
//     if (n==1){
//         cout << from << ' ' << to << '\n';
//         return ;
//     }
//     hanoiTower(from, 6-from-to, n-1);
//     cout << from << ' ' << to << '\n';
//     hanoiTower(6-from-to,to,n-1);
// }

void hanoiTower3(int from, int by, int to, int n){
    if (n==1){
        cout << from << ' '<<to<<'\n';
        return ;
    }
    hanoiTower3(from, to, by, n-1);
    cout << from << ' ' << to << '\n';
    hanoiTower3(by, from, to, n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int k;
    cin >> k;
    // cout << pow(2,k)-1<<'\n'; // 입력 최대가 20인 pow 함수 특성 상 오차가 커져 답이 틀린다.
    cout << (int)pow(2,k)-1<<'\n';
    // hanoiTower(1,3,k);
    hanoiTower3(1,2,3,k);
    // cout << cnt;
    return 0;
}