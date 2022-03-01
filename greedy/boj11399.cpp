#include <bits/stdc++.h>
using namespace std;
int p[1002];
int t[1002];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,ans = 0;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> p[i];
    }
    sort(p, p+n);
    t[0] = p[0];
    for (int i = 1;i<n;i++){
        t[i] = p[i] + t[i-1];
    }
    for (int i = 0;i<n;i++){
        ans += t[i];
    }
    cout << ans;
}