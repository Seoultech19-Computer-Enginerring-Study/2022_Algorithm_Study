#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, sum, arr[10]={};
    cin >> a >> b >> c;
    sum = a*b*c;
    while(sum>0){
        arr[sum%10]++;
        sum/=10;
    }
    for(int i=0; i<10; i++) cout << arr[i] << "\n";
}
