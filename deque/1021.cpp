#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin>>n>>m;
    deque<int> dq;
    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }
    int count=0;
    while(m--){
        int num;
        cin>>num;
        int idx=0;
        for(auto a : dq){
            if(num==a) break;
            idx++;
        }
        if(idx<=dq.size()/2) {
            while(dq.front()!=num){
                int f = dq.front();
                dq.pop_front();
                dq.push_back(f);
                count++;
            }
        } else {
            while(dq.front()!=num){
                int b = dq.back();
                dq.pop_back();
                dq.push_front(b);
                count++;
            }
        }
        dq.pop_front();
    }
    cout<<count;
}
