#include <bits/stdc++.h>
using namespace std;
int dat[1001][1001];
bool visited[1001];
int n,m,v;

queue<int> Q;
stack<int> S;

void bfs(int v){
    Q.push(v);
    visited[v] = true;
    while (!Q.empty()){
        int cur = Q.front();
        cout << cur << " ";
        Q.pop();
        for (int i=0;i<=n;i++){
            if (dat[cur][i] == 0 || visited[i] == true) continue;
            Q.push(i);
            visited[i] = true;
        }
    }
}
void dfs(int v){
    visited[v] = true;
    cout << v << " ";
    for (int i = 0;i<=n;i++){
        if (dat[v][i] == 0|| visited[i] == true) continue;
        dfs(i);
    }
}

void dfs_stack(int v) {
    S.push(v);
    while (!S.empty()) {
        int cur = S.top();
        S.pop();
        if(!visited[cur]){
            cout << cur << ' ';
        }
        visited[cur] = true;
        for (int i = n; i > 0; i--) {
            if (dat[cur][i] && !visited[i]) {
                S.push(i);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n>>m>>v;
    for (int i = 0; i < m;i++){
        int from, to;
        cin >> from >> to;
        dat[from][to] = 1;
        dat[to][from] = 1;
    }
    dfs_stack(v);
    for (int i = 0;i<=1001;i++){
        visited[i] = false;
    }
    cout << "\n";
    bfs(v);
    return 0;
}