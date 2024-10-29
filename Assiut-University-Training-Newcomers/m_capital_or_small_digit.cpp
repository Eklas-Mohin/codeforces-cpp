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

    if (ch >= 'a' && ch <= 'z') {
        cout << "ALPHA\nIS SMALL" << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "ALPHA\nIS CAPITAL" << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}
