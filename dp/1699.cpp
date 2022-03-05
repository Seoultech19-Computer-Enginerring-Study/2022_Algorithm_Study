#include<bits/stdc++.h>
using namespace std;
int d[100005];
int n;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    d[0]=0;
    d[1]=1;
    for(int i=2;i<=n;i++){
        d[i] = d[i-1]+1;
        int index=2;
        while(pow(index,2)<=i){
            d[i] = min(d[i], d[i - (int)pow(index,2)]+1);
            index++;
        }
    }
    cout<<d[n];
}