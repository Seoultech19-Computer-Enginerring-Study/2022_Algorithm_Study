#include <bits/stdc++.h>
#define MAX 10
using namespace std;
int n,m;

int arr[MAX];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for (int i = m;i<n;i++){
        arr[i] = 1;
    }
    do{
        for (int i =0;i<n;i++){
            if (arr[i] == 0){
                cout << i+1<<' ';
            }
        }
        cout << "\n";
    }while (next_permutation(arr, arr+n));

    return 0;
}