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

    int n, arr1[1000], arr2[1000];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    for (int i = 0; i < n; ++i) {
        if (arr1[i] != arr2[i]) {
            cout << "no" << endl;
            return 0;
        }
    }
    
    cout << "yes" << endl;

    return 0;
}
