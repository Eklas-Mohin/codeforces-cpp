#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, primary = 0, secondary = 0;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        primary += arr[i][i];
    }

    for (int i = 0; i < n; ++i) {
        secondary += arr[i][n - i - 1];
    }

    cout << abs(primary - secondary) << endl;

    return 0;
}
