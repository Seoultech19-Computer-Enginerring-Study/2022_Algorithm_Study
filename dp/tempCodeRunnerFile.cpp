#include <bits/stdc++.h>
using namespace std;
int T;
int n, k, w;
int t[1005];
int xy[1005][1005];
vector<int> result;
void dfs(int cur, int sum){
    bool flag = false;
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(xy[i][cur]){
            flag = true;
            v.push_back(i);
        }
    }
    if(!flag) result.push_back(sum);
    for(auto a : v) {
        dfs(a, sum+t[a]);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> t[i];
        }
        vector<pair<int, int>> v(k);
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            xy[a][b] = 1;
        }
        cin >> w;
        dfs(w, t[w]);
    }
    int answer = 0;
    for(auto a: result){
        answer = max(answer, a);
    }
    cout<< answer<<"\n";
}