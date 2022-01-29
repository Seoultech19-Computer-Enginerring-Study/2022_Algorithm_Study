#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    stack<pair<int, int> > S;
    for(int i=1; i<=n; i++) {
        int h;
        cin>>h;
        while(!S.empty()) {
            // 가장 상단 아이템
            auto e = S.top();
            // 상단의 아이템이 전파를 받으면,
            if(e.second>=h) {
                cout<<e.first<<' ';
                break;
            }
           S.pop();
        }
        if(S.empty()) cout<<0<<' ';
        S.push(make_pair(i, h));
    }
}