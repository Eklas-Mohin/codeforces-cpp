#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, m;

    while (cin >> n >> m) {
        if (n < 1 || m  < 1) {
            break;
        }
        int sum = 0;
        for (int i = min(n, m); i <= max(n, m); ++i) {
            cout << i << ' ';
            sum += i;
        }
        cout << "sum =" << sum << endl;
    } 

    return 0;
}
