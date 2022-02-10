#include <bits/stdc++.h>
#define MAX 9
using namespace std;
int n, m;
int arr[MAX];
int ret[MAX];
bool isused[MAX];

void func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[ret[i]] << ' ';
        }
        cout << "\n";
        return;
    }

    int s = 0;
    if (k != 0)
    {
        s = ret[k - 1];
    }
    for (int i = s; i < n; i++)
    {
        ret[k] = i;
        func(k + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    func(0);

    return 0;
}