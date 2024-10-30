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
    
    int x, y;
    char sign;

    scanf("%d %c %d", &x, &sign, &y);

    if (sign == '>') {
        if (x > y) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if (sign == '<') {
        if (x < y) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else {
        if (x == y) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    }
    
    return 0;
}
