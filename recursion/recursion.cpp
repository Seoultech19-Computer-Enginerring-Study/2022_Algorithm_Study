#include <bits/stdc++.h>
using namespace std;

void func1(int n){
    if (n==0)return;
    cout << n<<' ';
    func1(n-1);
}

int func2(int n){
    if (n==0)return 0;
    return func2(n-1) + n;    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    return 0;
}