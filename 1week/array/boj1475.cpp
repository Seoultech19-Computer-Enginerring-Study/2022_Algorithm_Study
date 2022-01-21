#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[10]={}, N, max=0;
    cin >> N;
    while(N>0){
        arr[N%10]++;
        N/=10;
    }
    arr[6]=(arr[6]+arr[9]+1)/2;
    arr[9]=0;
    for(int i=0;i<10;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout << max;
}
