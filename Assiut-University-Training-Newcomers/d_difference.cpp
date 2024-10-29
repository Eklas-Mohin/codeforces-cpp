#include <iostream>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    long long a, b, c, d, x;
    cin >> a >> b >> c >> d;
    
    x = (a * b) - (c * d);
    cout << "Difference = " << x << endl;

    return 0;
}
