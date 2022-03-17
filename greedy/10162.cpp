#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a, b, c;
    a = n/300;
    n%=300;
    b = n/60;
    n%=60;
    c = n/10;
    n%=10;
    if(n>0) {
        cout<<-1;
        return 0;
    }
    cout<<a<<' '<<b<<' '<<c;
}