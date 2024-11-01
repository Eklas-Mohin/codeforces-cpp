#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, x, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;

    while (n--) {
        cin >> x;
        if (x > 0) {
            pos++;
        } else if (x < 0) {
            neg++;
        }
        x = abs(x);
        if (x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    
    return 0;
}
