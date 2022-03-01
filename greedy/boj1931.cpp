#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
vector<pair<int, int>> ans;

// bool cmp(pair<int, int> v1, pair<int,int> v2){
//     if (v1.second == v2.second){
//         return v1.first < v1.first;
//     }else{
//         return v1.second < v2.second;
//     }
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    for (int i =0;i<n;i++){
        int start, end;
        cin >> start >> end;
        v.push_back({end, start});
    }

    sort(v.begin(), v.end());
    int end = 0;
    int cnt = 0;

    for (int i = 0;i<n;i++){
        if (v[i].second >= end){
            end = v[i].first;
            cnt++;
            ans.push_back({v[i].first, v[i].second});
        }
    }
    // for (int i = 0;i<ans.size();i++){
    //     cout << ans[i].first<<" "<<ans[i].second<<"\n";
    // }
    cout << cnt;
    return 0;
}