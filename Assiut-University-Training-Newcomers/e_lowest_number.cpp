#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, arr[1000];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    cout << *min_element(arr, arr + n) << ' ';
    cout << (min_element(arr, arr + n) - arr) + 1 << endl;

    return 0;
}
