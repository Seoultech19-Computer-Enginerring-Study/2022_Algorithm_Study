#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;

long long dist[100005];
long long price[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int m=0;
    for(int i=0;i<n-1;i++){
        cin>>dist[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>price[i];
    }
    long long greedy = MAX;
    long long sum = 0;
    for(int i=0;i<n-1;i++){
        if(price[i]<greedy)
            greedy = price[i];
        sum += greedy * dist[i];
    }
    cout<<sum;
    
}