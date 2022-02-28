#include<bits/stdc++.h>
#define MAX 1000005
using namespace std;
bool vis[MAX];
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
        v1.push_back({v, m});
    }
    for(int i=0;i<k;i++){
        int c;
        cin>>c;
        v2.push_back(c);
    }
    int result = 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(auto c : v2){
        for(int i=n-1;i>=0;i--){
            if(c>=v1[i].second && !vis[i]){
                result += v1[i].first;
                vis[i] = true;
                break;
            }
        }
    }
    cout<<result;
}