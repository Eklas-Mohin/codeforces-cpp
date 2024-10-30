#include <iostream>
#include <cmath>
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
    
    int a, b, c, x, y, z;
    cin >> a >> b >> c;
    x = a, y = b, z = c;

    if (a > b) swap(a, b);
    if (b > c) {
        swap(b, c);
        if (a > b) swap(a, b);
    }

    cout << a << endl << b << endl << c << endl;
    cout << endl;
    cout << x << endl << y << endl << z << endl;
   
    
    return 0;
}
