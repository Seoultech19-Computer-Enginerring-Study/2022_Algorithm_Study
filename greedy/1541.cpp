#include<bits/stdc++.h>
using namespace std;

vector<string> split(string input, char delimiter)
{
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter))
    {
        answer.push_back(temp);
    }

    return answer;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    vector<string> sp = split(s, '-');
    vector<int> num;
    for(int i=0; i<sp.size();i++){
        vector<string> v = split(sp[i], '+');
        int sum = 0;
        for(auto a : v){
            sum+=stoi(a);
        }
        num.push_back(sum);
    }
    int result = num[0];
    for(int i=1;i<num.size();i++){
        result -= num[i];
    }
    cout<<result;
}