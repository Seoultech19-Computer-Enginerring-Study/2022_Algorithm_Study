#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int freq[2000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        // To fix the Error of OutOfBound 
        if (x - arr[i] > 0)
        {
            if (freq[x - arr[i]])
            {
                cnt++;
            }
            freq[arr[i]]++;
        }
    }
    cout << cnt;
    return 0;
}