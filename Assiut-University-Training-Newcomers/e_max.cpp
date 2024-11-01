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
    int arr[n];

    for (auto &i : arr) {
        cin >> i;
    }

    cout << *max_element(arr, arr + n) << endl;
    
    return 0;
}
