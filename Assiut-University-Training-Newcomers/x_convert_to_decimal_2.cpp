#include <iostream>
#include <cmath>
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
        long long n, cnt = 0, ans = 2;
        cin >> n;

        while (n > 0) {
            cnt += n % 2;
            n = n >> 1;
        }

        for (int j = 1; j < cnt; ++j) {
            ans = ans * 2;
        }

        cout << ans - 1 << endl;
    }

    return 0;
}
