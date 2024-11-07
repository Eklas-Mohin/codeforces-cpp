#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, m, arr[100000];
    map<int, int> mp;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mp[arr[i]] += 1;
    }

    for (int i = 1; i <= m; ++i) {
        if (mp[i]) {
            cout << mp[i] << endl;
        }
    }

    return 0;
}
