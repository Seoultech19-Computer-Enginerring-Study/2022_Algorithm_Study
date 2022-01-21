#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string N;
    int M;
    cin >> N >> M;
    list<char> lis;
    for(auto A : N) lis.push_back(A);
    auto cursor=lis.end();
    while(M--){
        char select;
        cin >> select;
        if(select=='P'){
            char plus;
            cin >> plus;
            lis.insert(cursor, plus);
        }
        else if(select=='D'){
            if(cursor!=lis.end()) cursor++;
        }
        else if(select=='L'){
            if(cursor!=lis.begin()) cursor--;
        }
        else{
            if(cursor!=lis.begin()){
                cursor--;
                cursor = lis.erase(cursor);
            }
        }
    }
    for(auto A : lis) cout << A;
}
