#include <bits/stdc++.h>
#define MAX 100 + 5
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int board[MAX][MAX];
int dist[MAX][MAX];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] != 1)
                continue;
            count++;
            queue<pair<int, int> > Q;
            Q.push(make_pair(i, j));
            while (!Q.empty())
            {
                auto cur = Q.front();
                Q.pop();
                board[cur.first][cur.second] = count;
                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (board[nx][ny] != 1)
                        continue;
                    Q.push(make_pair(nx, ny));
                }
            }
        }
    }

    int result = 10000;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 0)
                continue;
            memset(dist, -1, sizeof(dist));
            queue<pair<int, int> > Q;
            Q.push(make_pair(i, j));
            dist[i][j] = 0;
            auto start = Q.front();
            while (!Q.empty())
            {
                auto cur = Q.front();
                Q.pop();
                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    // 범위를 벗어날 경우
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    // 다른 섬에 도달할 경우
                    if (board[nx][ny] != board[start.first][start.second] && board[nx][ny] != 0)
                    {
                        result = min(result, dist[cur.first][cur.second]);
                        dist[nx][ny] = dist[cur.first][cur.second] + 1;
                        continue;
                    }
                    // 시작섬과 같은 경우
                    if (board[nx][ny] == board[start.first][start.second])
                        continue;
                    // 이미 방문한 경우
                    if (dist[nx][ny] > -1)
                        continue;
                    // 최소 경우보다 길어질 경우 => 시간초과 방지
                    if(dist[cur.first][cur.second]>result)
                        continue;
                    dist[nx][ny] = dist[cur.first][cur.second] + 1;
                    Q.push(make_pair(nx, ny));
                }
            }
        }
    }
    cout << result;
}