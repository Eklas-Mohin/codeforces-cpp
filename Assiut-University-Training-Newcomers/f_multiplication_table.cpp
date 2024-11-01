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
    
    int n;
    cin >> n;
    
    for (int i = 1; i <= 12; ++i) {
        cout << n <<" * " << i << " = " << i * n << endl;
    }
    
    return 0;
}
