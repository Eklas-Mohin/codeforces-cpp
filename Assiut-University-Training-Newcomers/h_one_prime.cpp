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

    if (n < 2 || (n > 2 && n % 2 == 0)) {
        cout << "NO" << endl;
        return 0;
    } else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    
    return 0;
}
