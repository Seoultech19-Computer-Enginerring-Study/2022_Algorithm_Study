#include <bits/stdc++.h>
using namespace std;
int n,s,cnt;
int arr[21];

int func(int cur, int sum){
    if (cur == n && sum == s){
        cnt++;
        return cnt;
    }
    func(cur + 1, sum);
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }
    func(0, 0);
    cout << cnt;

    return 0;
}