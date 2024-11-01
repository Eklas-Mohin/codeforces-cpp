#include <iostream>
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
        if (arr[i] < 0) {
            arr[i] = 2;
        } else if (arr[i] > 0){
            arr[i] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }

    return 0;
}
