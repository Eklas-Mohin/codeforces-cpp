#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;

    if (n < 2) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        cout << i << '\n';
    }
    
    return 0;
}
