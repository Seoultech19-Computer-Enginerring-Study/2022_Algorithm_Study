#include <bits/stdc++.h>
using namespace std;
int t, w;
int a[1002];
int d[1002][32][3]; // d[i][j][k]: i:현재시간, j: 이동횟수, k:나무 번호
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t >> w;
    for (int i = 1; i <= t; i++)
    {
        cin >> a[i];
    }
    // 0초부터 피라미드식으로 배열 채움
    for (int i = 1; i <= t; i++)
    {
        // 이동하지 않는 경우
        // (시작이 1번, 2번 나무는 이동 안하면 못감)
        d[i][0][1] = d[i - 1][0][1] + (a[i] == 1 ? 1 : 0);
        for (int j = 1; j <= w; j++)
        { // j번 이동
            if (i < j)
                break; // 현재 시간보다 많이 이동할 수 없다
            if (a[i] == 1)
            { // 1번 나무인 경우
                // 1번 나무에 계속 있거나 1번 나무로 옮기거나
                // 두 경우 중 자두를 더 많이 잡는 경우에 + 1
                d[i][j][1] = max(d[i - 1][j - 1][2], d[i - 1][j][1]) + 1;
                // 2번 나무에 계속 있거나 2번 나무로 옮기거나
                // 두 경우 중 자두를 더 많이 잡는 경우
                d[i][j][2] = max(d[i - 1][j - 1][1], d[i - 1][i][2]);
            }
            else
            { // 2번 나무인 경우
                d[i][j][1] = max(d[i - 1][j - 1][2], d[i - 1][j][1]);
                d[i][j][2] = max(d[i - 1][j - 1][1], d[i - 1][j][2]) + 1;
            }
        }
    }
    int ans = 0;
    for (int j = 0; j <= w; j++)
        ans = max({ans, d[t][j][1], d[t][j][2]});
    cout << ans;
}