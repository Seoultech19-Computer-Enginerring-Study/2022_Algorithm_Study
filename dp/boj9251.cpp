#include <bits/stdc++.h>
#define MAX 1002
using namespace std;

int Table[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 1;i<=s1.length();i++){
        for (int j = 1;j<=s2.length();j++){
            if (s1[i-1] == s2[j-1]){
                Table[i][j] = Table[i-1][j-1] + 1;
            }else{
                Table[i][j] = max({Table[i-1][j-1], Table[i][j-1], Table[i-1][j]});
            }
        }
    }
    cout << Table[s1.length()][s2.length()];
    // for (int i = 0;i<=s1.length();i++){
    //     for (int j = 0; j<=s2.length();j++){
    //         cout << Table[i][j]<< " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}