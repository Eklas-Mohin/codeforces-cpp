#include <iostream>
#include <cmath>
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
    
    int n, ans = INT_MAX;
    cin >> n;
    int arr[n];

    for (auto &i: arr) {
        cin >> i;
    }

    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        while (arr[i] % 2 == 0) {
            cnt += 1;
            arr[i] /= 2;
        }
        ans = min(ans, cnt);
    }
    
    cout << ans << endl;
    
    return 0;
}
