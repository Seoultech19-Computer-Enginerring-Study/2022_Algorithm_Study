#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, x, v[100]={}, cnt=0;
    cin >> N;
    for(int i=0;i<N;i++) cin >> v[i];
    cin >> x;
    for(int i=0;i<N;i++) if(v[i]==x) cnt++;
    cout << cnt;
}
