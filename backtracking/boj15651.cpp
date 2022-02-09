#include <bits/stdc++.h>
#define MAX 8
using namespace std;
int n,m;
int arr[MAX];
int isused[MAX];
void func(int k){
    if (k == m){
        for (int i = 0;i<m;i++){
            cout << arr[i] + 1 << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0;i<n;i++){
            arr[k] = i;
            func(k + 1);

    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    func(0);

    return 0;
}