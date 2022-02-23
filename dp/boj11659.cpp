#include <bits/stdc++.h>
using namespace std;
int a[100002], d[100002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    for (int i = 0; i<n; i++){
        cin >> a[i];
        d[i] = d[i-1] + a[i];
    }
    for (int k = 0;k<m;k++){
        int i,j;
        cin >> i >> j;
        cout << d[j-1] - d[i-2]<<"\n";
    }

    return 0;
}