#include <iostream>
#include <string>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    char ch;
    cin >> ch;

    if (ch >= 'a') {
        ch = ch - 32;
    } else {
        ch = ch + 32;
    }
    
    cout << ch << endl;

    return 0;
}
