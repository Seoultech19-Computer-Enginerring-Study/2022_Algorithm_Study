#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num[11] = {0,};
    int a,b,c;
    cin >> a >> b >> c;

    int ret = a * b * c;
    string s = to_string(ret);
    for (auto n:s){
        num[n - '0']++;
    }
    for (int i = 0; i<10;i++){
        cout << num[i] <<"\n";
    }
    return 0;
}