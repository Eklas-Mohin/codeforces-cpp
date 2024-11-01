#include <iostream>
#include <vector>
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
    vector<int> div;
    
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            div.push_back(i);
            if (i * i != n) {
                 div.push_back(n / i);
            }
        }
    }

    sort(div.begin(), div.end());

    for (auto x: div) {
        cout << x << endl;
    }

    return 0;
}
