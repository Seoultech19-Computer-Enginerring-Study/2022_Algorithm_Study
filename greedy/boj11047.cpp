#include <bits/stdc++.h>
using namespace std;
int coin[15];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,k, cnt = 0;
    cin >> n >> k;
    for (int i = 0;i<n;i++){
        cin >> coin[i];
    }

    for (int i =n-1;i>=0;i--){
        while (k - coin[i]>=0){
            k -= coin[i];
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}