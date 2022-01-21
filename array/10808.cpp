#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int arr[26]={ 0 };
    for(int e : s)
        arr[e-'a']++;
    for(int i=0; i<26; i++)
        cout<<arr[i]<<' ';
}