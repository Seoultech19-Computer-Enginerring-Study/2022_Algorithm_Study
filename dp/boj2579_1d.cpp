#include <bits/stdc++.h>
using namespace std;
int d[302];
int stair[302];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0;i<n;i++){
        cin >> stair[i];
        ans += stair[i];
    }
    if (n <= 2){
        cout << ans;
        return 0;
    }
    d[0] = stair[0];
    d[1] = stair[1];
    d[2] = stair[2];

    for (int i = 3;i<n;i++){
        d[i] = min(d[i-2], d[i-3]) + stair[i];
    }
    cout << ans - min(d[n-2], d[n-3]);

    return 0;
}