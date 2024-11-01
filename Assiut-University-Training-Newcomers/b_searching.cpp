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

    int n, ans = -1, k, arr[100005];
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> k;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == k) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
