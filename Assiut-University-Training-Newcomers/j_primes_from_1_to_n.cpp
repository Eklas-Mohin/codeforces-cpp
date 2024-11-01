#include <iostream>
#include <cstring>
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
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= n; ++i) {
        if (prime[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            cout << i << ' ';
        }
    }

    return 0;
}
