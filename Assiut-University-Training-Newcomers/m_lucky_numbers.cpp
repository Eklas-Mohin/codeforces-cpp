#include <iostream>
using namespace std;

bool isLucky(int x) {
    while (x > 0) {
        if (x % 10 != 7 && x % 10 != 4) {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int a, b, flag = 0;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        if(isLucky(i)) {
            cout << i << ' ';
            flag++;
        }
    }

    if (!flag) {
        cout << -1 << endl;
    }

    return 0;
}
