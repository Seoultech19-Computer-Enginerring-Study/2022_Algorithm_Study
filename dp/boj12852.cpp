#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
int d[1000001];
int a[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    a[1] = 0;
    for (int i = 2;i<=n;i++){
        a[i] = a[i-1] + 1;
        d[i] = i-1;
        if (i%2 == 0 && a[i] > a[i/2] + 1){
            a[i] = a[i/2] + 1;
            d[i] = i/2;
        }
        if (i%3 == 0 && a[i] > a[i/3] + 1){
            a[i] = a[i/3] + 1;
            d[i] = i/3;
        }
    }
    cout << a[n] << '\n';
    int cur = n;
    while(1){
        cout << cur << ' ';
        if (cur == 1) break;
        cur = d[cur];
    }

    return 0;
}