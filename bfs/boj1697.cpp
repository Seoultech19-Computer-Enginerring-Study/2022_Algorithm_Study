#include <bits/stdc++.h>
using namespace std;
// int board[100001];
int dist[100001];
int dx[3] = {1, -1, 2};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    // board[n] = 1;
    // board[k] = 1;
    for (int i = 0;i<100002;i++){
        dist[i] = -1;
    }
    dist[n] = 0;

    queue<int> queue;
    queue.push(n);
    while (!queue.empty()){
        int cur = queue.front();
        queue.pop();
        for(int i = 0;i<3;i++){
            int x;
            if (i==2){
                x = cur * dx[i];
            }else{
                x = cur + dx[i];
            }
            if (x < 0 || x > 100001) continue;
            if (dist[x] >= 0) continue;
            dist[x] = dist[cur] + 1;

            queue.push(x);
            // board[x] = 1;
        }
    }
    cout << dist[k];

    return 0;
}