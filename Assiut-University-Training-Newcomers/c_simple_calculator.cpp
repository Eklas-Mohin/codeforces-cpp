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
    
    int a, b;
    cin >> a >> b;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " * " << b << " = " << (long long)a * b << endl; 
    cout << a << " - " << b << " = " << a - b << endl; 

    return 0;
}
