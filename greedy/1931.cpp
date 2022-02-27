#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());
    int cur = 0;
    int count = 0;
    for (auto a : v)
    {
        if (a.second >= cur)
        {
            cur = a.first;
            count++;
        }
    }
    cout << count;
}