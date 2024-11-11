#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str;
    int i = 0;
    getline(cin, str);

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == 92) {
            break;
        }
        cout << str[i];
    }

    cout << endl;
    
    return 0;
}
