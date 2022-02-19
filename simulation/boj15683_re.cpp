#include <bits/stdc++.h>
using namespace std;
int board[10][10];
int tmp_board[10][10];
int N, M, mn = 64;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
vector<pair<int, int>> cctv;

void update(int x, int y, int dir)
{
    dir %= 4;
    while (1)
    {
        x += dx[dir];
        y += dy[dir];
        if (x < 0 || x >= N || y < 0 || y >= M || board[x][y] == 6)
            break;
        if (board[x][y] > 0)
            continue;
        tmp_board[x][y] = -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
            if (board[i][j] > 0 && board[i][j] < 6)
            {
                cctv.push_back({i, j});
            }
        }
    }
    for (int tmp = 0; tmp < 1 << (2 * cctv.size()); tmp++)
    {
        int brute = tmp;
        for (int i = 0;i<N;i++){
            for (int j = 0;j<M;j++){
                tmp_board[i][j] = board[i][j];
            }
        }
        for (int i = 0; i < cctv.size(); i++)
        {
            int dir = brute % 4;
            brute /= 4;
            int x = cctv[i].first;
            int y = cctv[i].second;
            if (board[x][y] == 1)
            {
                update(x, y, dir);
            }
            if (board[x][y] == 2)
            {
                update(x, y, dir);
                update(x, y, dir + 2);
            }
            if (board[x][y] == 3)
            {
                update(x, y, dir);
                update(x, y, dir + 1);
            }
            if (board[x][y] == 4)
            {
                update(x, y, dir);
                update(x, y, dir + 1);
                update(x, y, dir + 2);
            }
            if (board[x][y] == 5)
            {
                update(x, y, dir);
                update(x, y, dir + 1);
                update(x, y, dir + 2);
                update(x, y, dir + 3);
            }
        }
        int cnt = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (tmp_board[i][j] == 0)
                {
                    cnt++;
                }
            }
        }
        mn = min(mn, cnt);
    }

    cout << mn;

    return 0;
}