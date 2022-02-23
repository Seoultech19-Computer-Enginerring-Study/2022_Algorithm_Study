#include <bits/stdc++.h>
using namespace std;
int d[302][2];
int stair[302];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0;i<n;i++){
        cin >> stair[i];
    }
    if (n==1){
        cout << stair[0];
        return 0;
    }
    d[0][0] = stair[0];
    d[0][1] = 0;
    d[1][0] = stair[1];
    d[1][1] = stair[0] + stair[1];

    for (int i = 2;i<n;i++){
        d[i][0] = max(d[i-2][0], d[i-2][1]) + stair[i];
        d[i][1] = d[i-1][0] + stair[i];
    }
    cout << max(d[n-1][0], d[n-1][1]);

    return 0;
}