// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int alpha[26] = {
//         0,
//     };
//     string s;
//     cin >> s;
//     for (char c : s)
//     {
//         switch (c)
//         {
//         case 'a':
//             alpha[0]++;
//             break;
//         case 'b':
//             alpha[1]++;
//             break;
//         case 'c':
//             alpha[2]++;
//             break;
//         case 'd':
//             alpha[3]++;
//             break;
//         case 'e':
//             alpha[4]++;
//             break;
//         case 'f':
//             alpha[5]++;
//             break;
//         case 'g':
//             alpha[6]++;
//             break;
//         case 'h':
//             alpha[7]++;
//             break;
//         case 'i':
//             alpha[8]++;
//             break;
//         case 'j':
//             alpha[9]++;
//             break;
//         case 'k':
//             alpha[10]++;
//             break;
//         case 'l':
//             alpha[11]++;
//             break;
//         case 'm':
//             alpha[12]++;
//             break;
//         case 'n':
//             alpha[13]++;
//             break;
//         case 'o':
//             alpha[14]++;
//             break;
//         case 'p':
//             alpha[15]++;
//             break;
//         case 'q':
//             alpha[16]++;
//             break;
//         case 'r':
//             alpha[17]++;
//             break;
//         case 's':
//             alpha[18]++;
//             break;
//         case 't':
//             alpha[19]++;
//             break;
//         case 'u':
//             alpha[20]++;
//             break;
//         case 'v':
//             alpha[21]++;
//             break;
//         case 'w':
//             alpha[22]++;
//             break;
//         case 'x':
//             alpha[23]++;
//             break;
//         case 'y':
//             alpha[24]++;
//             break;
//         case 'z':
//             alpha[25]++;
//             break;
//         default:
//             break;
//         }
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         cout << alpha[i] << " ";
//     }
//     return 0;
// }

///////////////////////개선
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int freq[26] = {0,};
    string s;
    cin >> s;
    for (auto c:s){
        freq[c-'a']++;
    }
    for (int i = 0; i < 26; i++){
        cout << freq[i] << " ";
    }

    return 0;
}