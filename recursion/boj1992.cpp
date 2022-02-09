#include <bits/stdc++.h>
#define MAX 64
using namespace std;
int arr[MAX][MAX];
string str;

void func(int x, int y, int n)
{
    if (n == 1)
    {
        str += arr[x][y];
        return;
    }
    bool zflag = false, oflag = false;
    for (int i = x; i < x + n; i++)
    {
        for (int j = y; j < y + n; j++)
        {
            if (arr[i][j] == '0')
            {
                zflag = true;
            }
            else
            {
                oflag = true;
            }
        }
    }
    if (zflag && oflag)
    {
        str += "(";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                func(x + i * n / 2, y + j * n / 2, n / 2);
            }
        }
        str += ")";
    }
    else if (zflag)
    {
        str += '0';
    }
    else if (oflag)
    {
        str += '1';
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = s[j];
        }
    }
    func(0, 0, N);
    cout << str;
    return 0;
}