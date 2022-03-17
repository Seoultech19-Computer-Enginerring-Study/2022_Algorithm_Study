#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        pq.push(num);
    }
    int result = 0;
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a+b);
        result+=(a+b);
    }
    cout<<result;
}