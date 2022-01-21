#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[9];
    bool isAsc=true, isDes=true;
    for(int i=0; i<8; i++){
        cin>>arr[i];
        if(i>0) {
            if(arr[i]>arr[i-1]) isDes=false;
            if(arr[i]<arr[i-1]) isAsc=false;
        }
    }
    if(isDes) cout<<"descending";
    else if(isAsc) cout<<"ascending";
    else cout<<"mixed";
    return 0;
}