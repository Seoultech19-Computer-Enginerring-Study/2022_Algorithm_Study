#include <bits/stdc++.h>
#define MAX 9
using namespace std;
int n,m;
int arr[MAX];
int ret[MAX];
bool isused[MAX];

void func(int k){
    if (k == m){

        for (int i = 0;i<m;i++){
            cout << ret[i] << ' ';
        }
        cout << "\n";
        return ;
    }

    for (int i = 0;i < n;i++){
        if (!isused[i]){
            ret[k] = arr[i];
            isused[i] = true;
            func(k+1);
            isused[i] = false;
        }

    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    func(0);

    return 0;
}