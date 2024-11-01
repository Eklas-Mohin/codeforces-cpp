#include <iostream>
#include <string>
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

    for (int i = 1; i <= n; ++i) {
        int k = n - i;
        string sp(k, ' ');
        string str(2 * i - 1, '*');
        cout << sp << str << endl;
    }

    for (int i = n; i > 0; --i) {
        int k = n - i;
        string sp(k, ' ');
        string str(2 * i - 1, '*');
        cout << sp << str << endl;
    }

    return 0;
}
