#include <bits/stdc++.h>
using namespace std;

long long mul(long long a, long long b, long long c){
    if (b == 1) return a % c;
    long long ret = mul(a,b/2,c);
    ret = ret * ret % c;
    if (b%2) return ret * a % c;
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