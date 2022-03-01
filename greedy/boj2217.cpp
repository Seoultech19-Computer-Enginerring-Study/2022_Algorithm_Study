#include <bits/stdc++.h>
using namespace std;
int rope[100002];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0;i<n;i++){
        cin >> rope[i];
    }
    sort(rope, rope+n,greater<>());
    int ans = 0;
    for (int i = 0;i<n;i++){
        ans = max(ans, rope[i]*(i+1));
    }
    cout << ans;
    return 0;
}
