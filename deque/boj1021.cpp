#include <bits/stdc++.h>
using namespace std;

int num[51];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> dq;
    int n, m, cnt = 0, index = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < m; i++)
    {
        index = find(dq.begin(), dq.end(), num[i]) - dq.begin();
        // 2번 연산
        if (index <= dq.size() / 2)
        {
            for (int j = 0; j < index; j++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        // 3번 연산
        else
        {
            for (int j = 0; j < dq.size() - index; j++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        // 1번 연산
        dq.pop_front();
    }

    cout << cnt;

    return 0;
}