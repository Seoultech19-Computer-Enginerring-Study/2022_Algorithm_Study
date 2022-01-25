#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);

    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        list<char> L = {};
        auto cursor = L.begin();

        for (auto c : s)
        {
            switch (c)
            {
            case '<':
                if (cursor != L.begin())
                {
                    cursor--;
                }
                break;
            case '>':
                if (cursor != L.end())
                {
                    cursor++;
                }
                break;
            case '-':
                if (cursor != L.begin())
                {
                    cursor--;
                    cursor = L.erase(cursor);
                }
                break;
            default:
                L.insert(cursor, c);
                break;
            }
        }
        for (auto c : L)
        {
            cout << c;
        }
        cout << "\n";
    }
    return 0;
}