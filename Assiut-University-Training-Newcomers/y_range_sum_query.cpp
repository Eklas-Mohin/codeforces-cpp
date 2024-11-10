#include <iostream>
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
    
    int n, m;
    long long arr[100001];
    cin >> n >> m;
    arr[0] = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }  

    for (int i = 2; i <= n; ++i) {
        arr[i] = arr[i] + arr[i - 1];
    }

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << endl;
    }

    return 0;
}
