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
    
    int tc;
    cin >> tc;

    while (tc--) {
        int n, m;
        cin >> n >> m;
        if (n > m) swap(n, m);
        m--;n++;
        if (m % 2 == 0) {
            m--;
        }
        if (n % 2 == 0) {
            n++;
        }
        int sum = 0;
        for (int i = n; i <= m; i = i + 2) {
            sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}
