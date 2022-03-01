#include <bits/stdc++.h>
using namespace std;
int a[52], b[52];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    int ans = 0;
    for (int i = 0;i<n;i++){
        ans += a[i] * b[n-i-1];
    }
    cout << ans;
    
}