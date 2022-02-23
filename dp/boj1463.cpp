#include <bits/stdc++.h>
using namespace std;
int dist[10000000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;

    dist[0] = 0;
    dist[1] = 0;
    for (int i = 2;i<=n;i++){
        dist[i] = dist[i-1] + 1;
        if (i%3 == 0){
            dist[i] = min(dist[i], dist[i/3]+1);
        }
        if (i%2 == 0){
            dist[i] = min(dist[i], dist[i/2] + 1);
        }
    }
    cout << dist[n];
      
    return 0;
}