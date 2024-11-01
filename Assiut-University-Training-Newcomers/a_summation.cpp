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

    long long n, in, sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> in;
        sum += in;
    }

    cout << abs(sum) << endl;

    return 0;
}
