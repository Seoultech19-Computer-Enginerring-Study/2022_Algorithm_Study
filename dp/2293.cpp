#include<bits/stdc++.h>
using namespace std;
int n, k;
int d[10001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    // v[0] 코인 사용
    for(int i=0;i<=k;i++){
        // v[0] 코인만으로 완성되면 d[i] = 1
        if(i%v[0]==0){
            d[i] = 1;
        }
    }
    // v[1]~v[n-1] 코인 사용
    for(int i=1;i<n;i++){
        for(int j=k;j>=0;j--){
            int index = 1;
            while(j-v[i]*index>=0){
                d[j] += d[j-v[i]*index];
                index++;
            }
        }
    }
    cout<<d[k]<<'\n';
}