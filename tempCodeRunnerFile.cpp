#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int h, w, n;
        cin>>h>>w>>n;
        cout<<100*(n%h)+(n/h+1)<<'\n';
    }
}