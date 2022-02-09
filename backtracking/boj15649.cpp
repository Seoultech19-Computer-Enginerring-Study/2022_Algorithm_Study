#include <bits/stdc++.h>
#define MAX 10
using namespace std;
int n,m;
int arr[MAX];
bool isused[MAX];

void func(int k){  // 현재 k개까지 수 선택.
    if (k == m){  // m개 모두 선택.
        for (int i = 0;i<m;i++){
            cout << arr[i] << ' '; // arr에 기록해둔 수 출력.
        }
        cout << '\n';
        return;
    }
    for (int i = 1;i<=n;i++){  // 1부터 n까지
        if(!isused[i]){  // 아직 i가 사용되지 않았으면
            arr[k] = i;  // k번째 수를 i로 
            isused[i] = true;  // i 사용 표시
            func(k+1);  // 다음 수 정하러 들어감.
            isused[i] = false;  // k번째 수를 i로 정한 모든 경우 확인 완료했으니 이제 i 사용 안 함 표시.
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    func(0);

    return 0;
}