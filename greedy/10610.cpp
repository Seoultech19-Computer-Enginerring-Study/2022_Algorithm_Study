#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v;
    long long sum=0;
    bool flag = false;
    for(int i=0;i<s.length();i++){
        v.push_back(s[i]-'0');
        sum+=s[i]-'0';
        if(s[i]-'0'==0) flag = true;
    }
    if(sum%3==0&&flag){
        sort(v.begin(), v.end(), greater<>());
        for (auto a : v)
            cout << a;
        return 0;
    }
    cout<<"-1";
}