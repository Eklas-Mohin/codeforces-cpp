#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    char ch;
    cin >> ch;
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        string str(x, ch);
        cout << str << endl;
    }

    return 0;
}
