#include <bits/stdc++.h>
using namespace std;
long long d[5005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int len = s.length();
    s = ' ' + s;
    d[0] = 1;
    for (int i = 1; i <= len; i++)
    {
        int x = s[i] - '0';
        if(x>0)
           d[i] = d[i] + d[i - 1];
        if(i==1||s[i-1]=='0') continue;
        x = (s[i - 1] - '0') * 10 + (s[i] - '0');
        if (10 <= x && x <= 26)
            d[i] = d[i] + d[i - 2];
        d[i] %= 1000000;
    }
    cout << d[len];
}