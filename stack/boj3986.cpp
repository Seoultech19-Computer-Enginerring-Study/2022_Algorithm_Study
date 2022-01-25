#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, cnt = 0;
    string s;
    cin >> n;
    for (int i = 0;i<n;i++){
        stack<char> stack;
        cin >> s;
        for (auto c:s){
            if (!stack.empty() && stack.top() == c){
                stack.pop();
            }else{
                stack.push(c);
            }
        }
        if (stack.empty()){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}