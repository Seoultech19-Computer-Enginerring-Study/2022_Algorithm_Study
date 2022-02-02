#include <bits/stdc++.h>
using namespace std;
int dat[101][101];
bool vis[101];
int n, m, cnt = -1;
stack<int> S;
void dfs(int v){
    vis[v] = true;
    cnt++;
    for (int i = 1;i<=n;i++){
        if (dat[v][i] == 0 || vis[i] == true) continue;
        dfs(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i<m;i++){
        int from, to;
        cin >> from >> to;
        dat[from][to] = 1;
        dat[to][from] = 1;
    }

    dfs(1);
    cout << cnt;
    return 0;
}