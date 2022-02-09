#include <bits/stdc++.h>
using namespace std;
int n,s,cnt;
int arr[21];
int isused[21];

int func(int cur, int *sum){
    if (cur == n || *sum == s){
        cnt++;
        return cnt;
    }
    for (int i = 0;i<n;i++){
        if (!isused[i]){
            arr[cur] = i;
            isused[i] = true;
            func(cur + 1, sum);
            isused[i] = false;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int sum = 0;
    func(0, &sum);
    cout << cnt;

    return 0;
}