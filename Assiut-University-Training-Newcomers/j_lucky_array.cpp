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
    
    int n, cnt = 1, arr[1000];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]) {
            cnt += 1;
        } else {
            break;
        }
    }

    if (cnt % 2) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}
