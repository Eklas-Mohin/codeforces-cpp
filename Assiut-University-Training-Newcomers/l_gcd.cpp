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
    
    int a, b, g;
    cin >> a >> b;
    g = __gcd(a, b);

    if (a < b) swap(a, b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    } 

    if (a == g) {
        cout << a << endl;
    }

    return 0;
}
