#include <bits/stdc++.h>
char arr[7000][3200];
using namespace std;
void star(int n, int level)
{
    if (level >= n)
        return;
    int len = 3 * pow(2, level);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 2 * len; j++)
        {
            arr[j + 2*len][i] = arr[j][i];
            arr[j + len][i + len] = arr[j][i];
        }
    }
    star(n, level + 1);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(arr, ' ', sizeof(arr));
    arr[0][0] = '*';
    arr[1][0] = '*';
    arr[2][0] = '*';
    arr[3][0] = '*';
    arr[4][0] = '*';
    arr[1][1] = '*';
    arr[3][1] = '*';
    arr[2][2] = '*';
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = n; i / 3 > 1; i /= 2)
        cnt++;
    star(cnt, 0);
    int len = pow(2, cnt) * 6;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < len ; j++)
        {
            cout << arr[j][i];
        }
        cout << '\n';
    }
}