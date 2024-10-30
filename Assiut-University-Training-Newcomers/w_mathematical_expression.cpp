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
    
    int x, y, z, res;
    char sign, t;

    scanf("%d %c %d %c %d", &x, &sign, &y, &t, &z);

    if (sign == '+') {
        res = x + y;
    } else if (sign == '-') {
        res = x - y;
    } else {
        res = x * y;
    }

    if (z == res) {
        cout << "Yes" << endl;
    } else {
        cout << res << endl;
    }
    
    return 0;
}
