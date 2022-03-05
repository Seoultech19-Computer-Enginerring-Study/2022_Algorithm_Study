#include<bits/stdc++.h>
using namespace std;
int n;
int d[20];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    vector<pair<int, int>> v(n);
    for(int i=1;i<=n;i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i=1;i<=n;i++){
        // 일단 전날과 당일을 비교해서 더 가치가 큰 것을 배치
        d[i] = max(d[i], d[i-1]);
        // 
        if(i+v[i].first <= n+1)
            d[i+v[i].first] = max(d[i+v[i].first], d[i] + v[i].second);
    }
    cout<<*max_element(d, d+n+1);
}