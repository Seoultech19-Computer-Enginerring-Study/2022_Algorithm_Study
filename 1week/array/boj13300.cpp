#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K, S, Y, arr[12]={}, cnt=0;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> S >> Y;
        if(S==0 && Y==1) arr[0]++;
        else if(S==0 && Y==2) arr[1]++;
        else if(S==0 && Y==3) arr[2]++;
        else if(S==0 && Y==4) arr[3]++;
        else if(S==0 && Y==5) arr[4]++;
        else if(S==0 && Y==6) arr[5]++;
        else if(S==1 && Y==1) arr[6]++;
        else if(S==1 && Y==2) arr[7]++;
        else if(S==1 && Y==3) arr[8]++;
        else if(S==1 && Y==4) arr[9]++;
        else if(S==1 && Y==5) arr[10]++;
        else if(S==1 && Y==6) arr[11]++;
    }
    for(int i=0; i<12; i++){
        cnt+=arr[i]/K;
        if(arr[i]%K!=0) cnt++;
    }
    cout << cnt;
}
