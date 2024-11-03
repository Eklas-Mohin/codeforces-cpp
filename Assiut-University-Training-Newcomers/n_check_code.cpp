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
    
    int a, b;
    string str;
    cin >> a >> b >> str;

    if (str[a] != '-') {
        cout << "NO" << endl;
        return 0;
    } else {
        for (int i = 0; i < str.length(); ++i) {
            if (i == a) {
                continue;
            }
            if (str[i] < 48 || str[i] > 57) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    
    return 0;
}
