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

    bool swapped;
    
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j + 1] < arr[j]) {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }

    return 0;
}
