#include <bits/stdc++.h>
using namespace std;

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
    cout << (int)pow(2,k)-1<<'\n';
    hanoiTower3(1,2,3,k);
    return 0;
}