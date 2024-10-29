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
    
    int a, b, temp;
    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << a / b << endl;
    cout << "ceil " << a << " / " << b << " = " << (a + b - 1) / b << endl;

    temp = a % b;
    if (temp * 2 >= b) {
        cout << "round " << a << " / " << b << " = " << (a + b - 1) / b << endl;
    } else {
        cout << "round " << a << " / " << b << " = " << a / b << endl;
    }

    return 0;
}
