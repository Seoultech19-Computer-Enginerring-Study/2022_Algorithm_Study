#include<bits/stdc++.h>
#define MAX 1000005
using namespace std;
int n, k;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    vector<pair<int, int>> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int m, v;
        cin>>m>>v;
        v1.push_back({m, v});
    }
    for(int i=0;i<k;i++){
        int c;
        cin>>c;
        v2.push_back(c);
    }
    long long result = 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    priority_queue<int> pq;
    int index = 0;
    for(auto c : v2){
        while(index<n && v1[index].first <= c){
            pq.push(v1[index++].second);
        }
        if(!pq.empty()){
            result+=(long long) pq.top();
            pq.pop();
        }
    }
    cout<<result;
}