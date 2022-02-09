#include <bits/stdc++.h>
#define MAX 8
using namespace std;
int n,m;
int arr[MAX];
int isused[MAX];
void func(int k){
    if (k == m){
        for (int i = 0;i<m;i++){
            cout << arr[i]<< " ";
        }
        cout << "\n";
        return;
    }
    int s = 1;
    if (k != 0){
        s = arr[k-1];
    }
    for (int i = s;i<=n;i++){
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