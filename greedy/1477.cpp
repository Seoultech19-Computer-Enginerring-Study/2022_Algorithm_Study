#include<bits/stdc++.h>
using namespace std;
int n, m, l;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>l;
    vector<int> v;
    v.push_back(0);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    v.push_back(l);
    sort(v.begin(), v.end());
    int left = 1, right = l-1;

    while(left<=right) {
        int mid = (left + right)/2;
        int count = 0;
        for(int i=1; i<v.size();i++){
            int section = v[i]-v[i-1];

            count += section/mid;
            if(section%mid==0) count--;
        }

        if(count>m) left = mid + 1;
        else right = mid - 1;
    }

    cout<<left;
}