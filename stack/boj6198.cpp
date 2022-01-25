// #include <bits/stdc++.h>
// using namespace std;

// int arr[80002];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);

//     stack<tuple<int, int, int>> building;
//     int n;
//     long long cnt = 0;
//     cin >> n;
//     building.push({1000000002, 0, 0});
//     for (int i = 1; i <= n; i++){
//         int b;
//         cin >> arr[i];
//     }
//     for (int i = n;i>0;i--){
//         while (!building.empty() && get<0>(building.top()) <= arr[i]){
//             building.pop();
//         }
//         cnt += get<2>(building.top());
//         // cnt += building.size();
        
//         building.push({arr[i], i, get<1>(building.top())});
//     }
//     cout <<cnt;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int buildings[80005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0;i<n;i++){
        cin >> buildings[i];
    }

    stack<int> stack;
    long long cnt = 0;
    for (int i = 0; i<n;i++){
        // 스택의 top에 위치한 빌딩의 높이가 현재 빌딩보다 작거나 같으면 i번째 빌딩의 옥상을 볼 수 없으므로 pop해준다.
        // 여기서 포인트는 스택의 크기는 n번 빌딩을 볼 수 있는 빌딩 관리자의 수를 의미한다.
        while (!stack.empty() && stack.top() <= buildings[i]){
            stack.pop();
        }
        stack.push(buildings[i]);
        cnt += stack.size() - 1;
    }
    cout << cnt;
    return 0;
}