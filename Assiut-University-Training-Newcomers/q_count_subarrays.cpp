#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int tc, ans, arr[100];
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        ans = n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (arr[j] >= arr[j - 1]) {
                    ans++;
                } else {
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
