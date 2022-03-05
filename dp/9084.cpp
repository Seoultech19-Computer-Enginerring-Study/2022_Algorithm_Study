#include<bits/stdc++.h>
using namespace std;
int d[10005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cin>>m;
        memset(d, 0, sizeof(d));
        d[0]=1;
        for(int i=0;i<n;i++){
            for(int j=v[i];j<=m;j++){
                d[j]+=d[j-v[i]];
            }
        }
        cout<<d[m]<<'\n';
    }
}