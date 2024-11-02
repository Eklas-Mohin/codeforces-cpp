#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int tc;
    cin >> tc;

    while (tc--) {
        int n, arr[100];
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        int ans = INT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int k = arr[i] + arr[j] + j - i;
                ans = min(ans, k);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
