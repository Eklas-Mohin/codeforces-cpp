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
    
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 > l2) {
        swap(l1,l2);
        swap(r1, r2);
    }

    if (l2 <= r1) {
        cout << max(l1, l2) << ' ' << min(r1, r2) << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}
