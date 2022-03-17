#include <bits/stdc++.h>
using namespace std;
char arr[10][10];
int alp[26];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = 1;
        for (int j = strlen(arr[i])-1; j >= 0; j--)
        {
            alp[arr[i][j] - 'A'] += x;
            x *= 10;
        }
    }
    sort(alp, alp + 26, greater<>());
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        result += alp[i] * (9 - i);
    }
    cout<<result<<'\n';
}