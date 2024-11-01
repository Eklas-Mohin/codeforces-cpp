#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int tc, n;
    cin >> tc;

    while (tc--) {
        cin >> n;
        long long fact = 1;
        for (int i = 1; i <= n; ++i) {
            fact = fact * i;
        }
        cout << fact << endl;
    }
    
    return 0;
}
