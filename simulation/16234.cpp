#include <bits/stdc++.h>
#define MAX 51
using namespace std;

int n, l, r;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[MAX][MAX];
int vis[MAX][MAX];
int ans = 0;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> l >> r;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    while (1)
    {
        bool flag = false;
        memset(vis, 0, sizeof(vis));
        queue<pair<int, int> > q;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (vis[i][j]) continue;
                q.push(make_pair(i, j));
                int sum = 0;
                vector<pair<int, int> > tmp;

                while (!q.empty())
                {
                    auto cur = q.front();
                    q.pop();

                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        // 범위를 벗어나면 넘어감
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                        int diff = abs(board[cur.first][cur.second] - board[nx][ny]);
                        // l, r안에 포함되지 않으면 넘어감
                        if (diff >= l && diff <= r){
                            // 인구이동이 더 가능하다고 표기
                            flag = 1;
                            if (!vis[cur.first][cur.second])
                            {
                                tmp.push_back(make_pair(cur.first, cur.second));
                                sum += board[cur.first][cur.second];
                                vis[cur.first][cur.second] = 1;
                            }
                            if (!vis[nx][ny])
                            {
                                tmp.push_back(make_pair(nx, ny));
                                sum += board[nx][ny];
                                vis[nx][ny] = 1;
                                q.push(make_pair(nx, ny));
                            }
                        }
                    }
                }
                // 연합을 만들고나면 연합에 속하는 국가들의 인구를 조정함
                for (int k = 0; k < tmp.size(); k++)
                    board[tmp[k].first][tmp[k].second] = sum / tmp.size();
            }
        }
        // 인구이동이 더이상 불가능하면
        if (!flag)
            break;
        ans++;
    }
    cout << ans;
}