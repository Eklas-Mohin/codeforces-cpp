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
    
    string a, b;
    cin >> a >> b;

    int x = a[a.length() - 1] - 48;
    int y = b[b.length() - 1] - '0';

    cout << x + y << endl;
    
    return 0;
}
