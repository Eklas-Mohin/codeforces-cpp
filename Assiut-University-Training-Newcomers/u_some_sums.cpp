#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, a, b, ans = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; ++i) {
        int sum = 0, temp = i;
        while (temp) {
            sum = sum + (temp % 10);
            temp /= 10;
        }
        if (sum >= a  && sum <= b) {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}
