#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<pair<int, int>> line;
    int n;
    cin >> n;
    for (int i = 0;i<n;i++){
        int x,y;
        cin >> x >> y;
        line.push_back({x,y});
    }
    sort(line.begin(),line.end());
    int s,e;
    tie(s,e) = line[0];
    int cnt = 0;
    for (int i = 1;i<n;i++){
        if (line[i].first <= e && line[i].second >= e){
            e = line[i].second;
        }else if (line[i].first > e){
            cnt += e - s;
            s = line[i].first;
            e = line[i].second;
        }
    }

    cout << cnt + e - s;
}