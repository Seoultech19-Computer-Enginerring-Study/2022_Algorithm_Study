#include <bits/stdc++.h>
using namespace std;

long long mul(long long a, long long b, long long c){
    long long ret = 1;
    while (b--) ret = ret * a % c;
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;
    cout << mul(a,b,c);
    return 0;
}