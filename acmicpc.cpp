#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int h, w, n;
        cin>>h>>w>>n;
        if(n%h==0) cout<<100*h+n/h<<'\n';
        else cout<<100*(n%h)+(n/h+1)<<'\n';
    }
}