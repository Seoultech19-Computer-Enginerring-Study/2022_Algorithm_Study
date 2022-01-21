#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arrA[26]={}, arrB[26]={}, cnt=0;
    string A, B;
    cin >> A >> B;
    for(char i : A) arrA[i-'a']++;
    for(char i : B) arrB[i-'a']++;
    for(int i=0; i<26; i++) cnt+=abs(arrA[i]-arrB[i]);
    cout << cnt;
}
