#include <bits/stdc++.h>
#define MAX 1001

using namespace std;
int graph[MAX][MAX];
int vis[MAX];
int n,m;

void dfs(int v){
    vis[v] = true;
    for (int i = 0;i<=n;i++){
        if (graph[v][i] && !vis[i]){
            dfs(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >>m;
    for (int i = 0;i<m;i++){
        int u,v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    int cnt = 0;
    for (int i = 1;i<=n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
        }
    }
    cout << cnt;

    return 0;
}