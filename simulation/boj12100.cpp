#include <bits/stdc++.h>
using namespace std;
int N;
int board[22][22];
int new_board[22][22];

void rotate()
{
    int tmp[22][22];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tmp[i][j] = new_board[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            new_board[j][N - i - 1] = tmp[i][j];
        }
    }
}

void tilt(int dir)
{
    while (dir--)
        rotate();
    for (int i = 0; i < N; i++)
    {
        int new_arr[22] = {};
        int index = 0;
        for (int j = 0; j < N; j++)
        {
            if (new_board[i][j] == 0)
                continue;
            if (new_arr[index] == 0)
            {
                new_arr[index] = new_board[i][j];
            }
            else if (new_arr[index] == new_board[i][j])
            {
                new_arr[index++] *= 2;
            }
            else
            {
                new_arr[++index] = new_board[i][j];
            }
        }
        for (int j = 0; j < N; j++)
        {
            new_board[i][j] = new_arr[j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
        }
    }
    int mx = 0;
    for (int tmp = 0; tmp < (1 << (2 * 5)); tmp++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                new_board[i][j] = board[i][j];
            }
        }
        int brute = tmp;
        for (int i = 0; i < 5; i++)
        {
            int dir = brute % 4;
            brute /= 4;
            tilt(dir);
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                mx = max(mx, new_board[i][j]);
            }
        }
    }

    cout << mx;

    return 0;
}