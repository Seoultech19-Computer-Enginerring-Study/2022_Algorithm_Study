#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[10005];
    cin>>s;
    vector<int> v;
    int sum=0;
    bool flag = false;
    for(int i=0;i<strlen(s);i++){
        v.push_back(s[i]-'0');
        sum+=s[i]-'0';
        if(s[i]-'0'==0) flag = true;
    }
    sort(v.begin(), v.end(), greater<>());
    if(sum%3==0&&flag){
        for (auto a : v)
            cout << a;
            return 0;
    }
    cout<<-1;
   

}