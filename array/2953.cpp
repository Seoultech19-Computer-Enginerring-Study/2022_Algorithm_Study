#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int score[6]={0};
    int result=0;
    for(int i=1;i<=5;i++){
        int sum=0;
        for(int i=0;i<4;i++){
            int num;
            cin>>num;
            sum+=num;
        }
        score[i]=sum;
        if(score[result]<sum) result = i;
    }
    cout<<result<<' '<<score[result]<<'\n';
}