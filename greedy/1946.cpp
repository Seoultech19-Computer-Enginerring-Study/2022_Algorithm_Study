#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(), v.end());
        int result = 1;
        int rank = v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].second<rank){
                result++;
                rank = v[i].second;
            }
        }
        cout<<result<<'\n';
    }
}