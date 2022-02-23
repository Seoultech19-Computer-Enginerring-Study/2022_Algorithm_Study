#include <bits/stdc++.h>
using namespace std;
int a[502][502];
int d[502][502];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0;i<n;i++){
        for (int j = 0;j<=i;j++){
            cin >> a[i][j];
        }
    }
    d[0][0] = a[0][0];

    int mx = 0;
    for (int i = n-1;i>=0;i--){
        for (int j =0;j<=i;j++){
            d[i][j] = max(d[i+1][j], d[i+1][j+1]) + a[i][j];
            // cout << d[i][j] <<" ";
        }
        // cout << "\n";
    }

    cout << d[0][0];

    return 0;
}