#include <bits/stdc++.h>
using namespace std;
int board[42][42];
int sticker[12][12];
int N, M, R, C, K, cnt;

bool is_valid(int x, int y)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (board[x + i][y + j] == 1 && sticker[i][j] == 1)
                return false;
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (sticker[i][j] == 1)
            {
                board[x + i][y + j] = 1;
            }
        }
    }
    return true;
}

void rotate()
{
    int tmp[12][12];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            tmp[i][j] = sticker[i][j];
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            sticker[j][R - 1 - i] = tmp[i][j];
        }
    }
    swap(R, C);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M >> K;
    while (K--)
    {
        cin >> R >> C;
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> sticker[i][j];
            }
        }
        for (int i = 0; i < 4; i++)
        {
            bool isFilled = false;
            for (int i = 0; i <= N - R; i++)
            {
                if (isFilled)
                    break;
                for (int j = 0; j <= M - C; j++)
                {
                    if (is_valid(i, j))
                    {
                        isFilled = true;
                        break;
                    }
                }
                if (isFilled)
                    break;
            }
            if (isFilled)
                break;
            rotate();
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (board[i][j] == 1)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}