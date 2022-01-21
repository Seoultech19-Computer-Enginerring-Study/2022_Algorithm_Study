#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[1000001]={}, n, x, cnt=0, num[2000001]={};
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];
    cin >> x;
    for(int i=0;i<n;i++) {
        if(num[x-arr[i]]) cnt++;
        num[arr[i]]=1;
    }
    cout << cnt;
}
