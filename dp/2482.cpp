#include<bits/stdc++.h>
using namespace std;
int n, k;
int d[1005][1005]; // d[i][j]: i개의 색 중에 j개를 선택하는 경우
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<=n;i++){
        d[i][0] = 1;
        d[i][1] = i;
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=k;j++){
            if(i==n){
                d[i][j] = d[i-3][j-1]+d[i-1][j];
            }else{
                d[i][j] = d[i-2][j-1]+d[i-1][j];
            }
            d[i][j] %= 1000000003;
        }
    }
    cout<<d[n][k];
}