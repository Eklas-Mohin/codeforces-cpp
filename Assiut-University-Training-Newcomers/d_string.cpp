#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str1, str2;
    cin >> str1 >> str2;

    cout << str1.length() << ' ' << str2.length() << endl;
    cout << str1 << str2 << endl;
    swap(str1[0], str2[0]);
    cout << str1 << ' ' << str2 << endl;

    return 0;
}
