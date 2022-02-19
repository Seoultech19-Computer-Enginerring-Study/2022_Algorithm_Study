#include <bits/stdc++.h>
using namespace std;
int N, M;
int board[55][55];
int dist[55][55];
vector<pair<int, int>> home;
vector<pair<int, int>> chicken;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 1)
            {
                home.push_back({i, j});
            }
            else if (board[i][j] == 2)
            {
                chicken.push_back({i, j});
            }
        }
    }
    vector<int> bruteForce(chicken.size(), 1);
    for (int i = 0; i < M; i++)
    {
        bruteForce[i] = 0;
    }
    int mn = 999999999;
    do
    {
        int dist = 0;
        for (int i = 0; i < home.size(); i++)
        {
            int tmp = 999999999;
            for (int j = 0; j < chicken.size(); j++)
            {
                if (bruteForce[j] == 1)
                    continue;
                tmp = min(tmp, abs(chicken[j].first - home[i].first) + abs(chicken[j].second - home[i].second));
            }
            dist += tmp;
        }
        mn = min(mn, dist);
    } while (next_permutation(bruteForce.begin(), bruteForce.end()));
    cout << mn;

    return 0;
}