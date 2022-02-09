#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void dfs(int n, int m, int level, int num)
{
    // 수가 중복되면 리턴
    for (auto a : v)
    {
        if (num == a)
        {
            v.pop_back();
            return;
        }
    }
    // 개수가 차면 출력
    if (m == level)
    {
        for (auto a : v)
            cout << a << ' ';
        cout << '\n';
        v.pop_back();
        return;
    }
    // 벡터에 숫자 넣기
    v.push_back(num);
    for (int i = 1; i <= n; i++)
    {
        if (num == i)
            continue;
        dfs(n, m, level + 1, i);
    }
    v.pop_back();
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        dfs(n, m, 0, i);
    }
}