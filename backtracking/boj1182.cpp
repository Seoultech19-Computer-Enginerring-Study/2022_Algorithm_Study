#include <bits/stdc++.h>
using namespace std;
int n,s,cnt;
int arr[50];

void func(int cur, int sum){
    if (cur == n){
        if (sum == s){
            cnt++;
        }
        return ;
    }
    func(cur + 1, sum);
    func(cur + 1, sum + arr[cur]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }
    func(0, 0);
    if (s == 0){
        cnt--; // 공집합 제외
    }
    cout << cnt;

    return 0;
}