#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int n;
    cin >> s >> n;
    list<char> L;

    for (auto c : s)
    {
        L.push_back(c);
    }

    auto cursor = L.end();

    for (int i = 0; i < n; i++)
    {
        char opt, c;
        cin >> opt;
        switch (opt)
        {
        case 'L':
            if (cursor != L.begin())
            {
                cursor--;
            }
            break;
        case 'D':
            if (cursor != L.end())
            {
                cursor++;
            }
            break;
        case 'B':
            if (cursor != L.begin())
            {
                cursor--;
                cursor = L.erase(cursor);
            }
            break;
        case 'P':
            cin >> c;
            L.insert(cursor, c);
            break;
        default:
            break;
        }
    }
    for (auto c : L)
    {
        cout << c;
    }
    return 0;
}