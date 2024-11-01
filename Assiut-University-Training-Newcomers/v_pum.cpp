#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, k = 1;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cout << k << ' ';
            ++k;
        }
        ++k;
        cout << "PUM" << endl;
    }

    return 0;
}
