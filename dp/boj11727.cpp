#include <bits/stdc++.h>
using namespace std;
int d[1002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    d[0] = 1;
    d[1] = 3;
    d[2] = 5;
    d[3] = 11;
    
    for (int i = 4;i<n;i++){
        d[i] = (d[i-2] * 2 + d[i-1]) % 10007;
    }
    cout << d[n-1]<<"\n";

    return 0;
}