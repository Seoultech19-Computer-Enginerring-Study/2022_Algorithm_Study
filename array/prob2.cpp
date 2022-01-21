#include<bits/stdc++.h>
using namespace std;
int func2(int arr[], int N);
int main(){
    int arr[3]={1, 52, 48};
    cout<<func2(arr, 3);
}
int func2(int arr[], int N) {
    // 이전에 숫자가 등장했는지 알기 위한 배열
    int check[101]={0};
    // check의 100-arr[i]번 째 인덱스가 1이면 합쳐서 100이 되는 숫자 존재
    // 해당 숫자가 존재한다고 check에 표시
    for(int i=0;i<N;i++) {
        if(check[100-arr[i]]==1)
            return 1;
        check[arr[i]]=1;
    }
    return 0;
}