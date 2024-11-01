#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        do {
            cout << n % 10 << ' ';
            n = n / 10;
        } while(n > 0);
        cout << endl;
    }

    return 0;
}
