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
    
    long long a, b, c, d, ans;
    cin >> a >> b >> c >> d;

    ans = (a * b) % 100;
    ans = (ans * c) % 100;
    ans = (ans * d) % 100;

    if (ans > 9) {
        cout << ans << endl;
    } else {
        cout << 0 << ans << endl;
    }
    
    return 0;
}
