#include <iostream>
#include <string>
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
    
    string str;
    char sign;
    int x = 0, y = 0;
    int p1 = 0, p2 = 0;
    bool flag = true;

    cin >> str;
    int len = str.length() - 1;
    
    for (int i = len; i >= 0; --i) {
        if (!(str[i] >= '0' && str[i] <= '9')) {
            sign = str[i];
            flag = false;
            continue;
        }
        if (flag) {
            int k = str[i] - 48;
            x = x + pow(10, p1) * k;
            p1++;
        } else {
            int k = str[i] - 48;
            y = y + pow(10, p2) * k;
            p2++;
        }
    }

    if (sign == '+') {
        cout << x + y << endl;
    } else if (sign == '-') {
        cout << y - x << endl;
    } else if (sign == '*') {
        cout << x * y << endl;
    } else {
        cout << y / x << endl;
    }
    
    return 0;
}
