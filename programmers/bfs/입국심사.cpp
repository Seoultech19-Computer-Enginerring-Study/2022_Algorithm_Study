#include <bits/stdc++.h>

using namespace std;

long long solution(int n, vector<int> times)
{
    long long left = 0;
    long long right = 100000;
    long long mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        long long count = 0;
        for (auto a : times)
        {
            count += mid / a;
        }
        if (count >= n)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left;
}

int main() {
    vector<int> v;
    v.push_back(7);
    v.push_back(10);
    cout<<solution(6, v);
}