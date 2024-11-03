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

    unsigned long long arr[51];
    arr[1] = 0; arr[2] = 1;
    for (int i = 3; i <= 50; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    int n;
    cin >> n;

    cout << arr[n] << endl;

    return 0;
}
