#include <bits/stdc++.h>
using namespace std;
int az[26];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;
    for(char c : S){
        az[c-'a']++;
    }
    for(int i = 0; i < 26; i++){
        cout << az[i] << ' ';
    }
}
