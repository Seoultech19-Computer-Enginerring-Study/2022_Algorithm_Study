#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
    list<char> lis = {};
    string A;
    auto cursor = lis.begin();

    cin >> A;
    for (auto B : A) {
      if (B == '<') {
	if (cursor != lis.begin()) cursor--;
      }
      else if (B == '>') {
	if (cursor != lis.end()) cursor++;
      }
      else if (B == '-') {
	if (cursor != lis.begin()) {
            cursor--;
            cursor = lis.erase(cursor);
          }
      }
      else lis.insert(cursor, B);      
    }
    for (auto B : lis) cout << B;
    cout << '\n';
  }
}
