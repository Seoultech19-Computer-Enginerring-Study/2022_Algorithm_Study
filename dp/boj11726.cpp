#include <bits/stdc++.h>
using namespace std;
int d[1002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    d[0] = 1;
    d[1] = 2;
    for (int i = 2;i<n;i++){
        d[i] = (d[i-1] + d[i-2]) % 10007;
    }
    cout << d[n-1];
    // cout << d[n-1]%10007; // int overflow 
    return 0;
}