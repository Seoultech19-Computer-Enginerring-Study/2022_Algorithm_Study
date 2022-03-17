#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    n = 1000-n;
    int result = 0;
    result += n / 500;
    n %= 500;
    result += n / 100;
    n %= 100;
    result += n / 50;
    n %= 50;
    result += n / 10;
    n %= 10;
    result += n / 5;
    n %= 5;
    result += n;
    cout<<result;
}