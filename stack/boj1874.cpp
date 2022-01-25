#include <bits/stdc++.h>
using namespace std;

int dat[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, num, top = 1;
    stack<int> stack;
    string ans;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> num;
        while (top<=num){
            stack.push(top++);
            ans += "+\n";
        }
        // pop 되는 것들만 모아두는 수열 stack이 따로 있다고 생각하면 연상하기 쉬울 것.
        if (stack.top() == num){
            stack.pop();
            ans += "-\n";
        }else{
            cout << "NO\n";
            return 0;
        }

    }
    cout << ans;
    return 0;
}