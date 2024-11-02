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
    
    int n, ans = 0;
    string str;
    cin >> n >> str;

    for (int i = 0; i < n; ++i) {
        ans = ans + str[i] - 48;
    }

    cout << ans << endl;

    return 0;
}
