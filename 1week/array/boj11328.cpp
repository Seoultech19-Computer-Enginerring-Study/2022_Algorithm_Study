#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int arrA[26]={}, arrB[26]={}, c=0;
        string A, B;
        cin >> A >> B;
        int j=0;
        while(A[j]){
            arrA[A[j]-'a']++;
            arrB[B[j]-'a']++;
            j++;
        }
        for(int j=0; j<26; j++){
            if(arrA[j]!=arrB[j]){
                c++;
                break;
            }
        }
        if(c==0) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}
