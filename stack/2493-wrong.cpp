#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int h;
        cin>>h;
        v.push_back(h);
    }

    vector<int> result(n);
    for(int i=n-1; i>=0; i--) {
        for(int j=i-1; j>=0; j--) {
            if(v[i]<=v[j]) {
                result[i] = j+1;
                break;
            }
        }
        if(!result[i]) result[i] = 0;
    }
    for(auto a : result) {
        cout<<a<<' ';
    }
}