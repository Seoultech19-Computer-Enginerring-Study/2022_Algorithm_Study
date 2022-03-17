#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    int i = 1;
    long long sum = 0;
    while(sum<=n){
        sum+=i;
        i++;
    }
    cout<<i-2;
}