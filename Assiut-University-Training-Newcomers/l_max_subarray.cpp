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

    int n, mx = INT_MIN, mn = INT_MAX, p1 = 0, p2 = 0, arr[1000];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (mx < arr[i]) {
            mx = arr[i];
            p1 = i;
        }
        if (mn > arr[i]) {
            mn = arr[i];
            p2 = i;
        }
    }

    swap(arr[p1], arr[p2]);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
