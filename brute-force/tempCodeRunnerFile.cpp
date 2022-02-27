#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if (abs(m-result)>abs(m-(v[i]+v[j]+v[k])))
                    result = v[i] + v[j] + v[k];
            }
        }
    }
    cout<<result;
}