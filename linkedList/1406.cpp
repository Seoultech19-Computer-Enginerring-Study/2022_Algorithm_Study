#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int m;
    cin>>s>>m;
    list<char> l;
    for(char c : s) {
        l.push_back(c);
    }
    auto it = l.end();
    for(int i=0; i<m; i++) {
        char op;
        cin>>op;
        if(op=='L' && l.begin()!=it) it--;
        if(op=='D' && l.end()!=it) it++;
        if(op=='B' && l.begin()!=it) {
            it--;
            it = l.erase(it);
        }
        if(op=='P') {
            char c;
            cin>>c;
            l.insert(it, c);
        }
    }
    for(auto a : l) cout<<a;
}