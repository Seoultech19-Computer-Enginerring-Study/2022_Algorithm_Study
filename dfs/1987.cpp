#include<bits/stdc++.h>
using namespace std;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int r, c;
char ch[25][25];
int arr[27]={0};
int result=0;
void dfs(pair<int, int> p, int count){
    result = max(result, count);
    for(int dir=0;dir<4;dir++){
        int nx = p.first+dx[dir];
        int ny = p.second+dy[dir];
        // 범위 벗어나면 스킵
        if(nx<0||nx>=r||ny<0||ny>=c) continue;
        // 이미 해당 알파벳을 순회했으면 스킵
        if(arr[ch[nx][ny]-'A']) continue;

        // 알파벳 표기
        arr[ch[nx][ny]-'A'] = 1;

        dfs({nx, ny}, count+1);
        // 복구
        arr[ch[nx][ny] - 'A'] = 0;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ch[i][j];
        }
    }
    arr[ch[0][0]-'A']=1;
    dfs({0, 0}, 1);
    cout<<result<<'\n';
}
