#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, arr[100000];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0, j = n - 1; i <= j; ++i, --j) {
        if (arr[i] != arr[j]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
