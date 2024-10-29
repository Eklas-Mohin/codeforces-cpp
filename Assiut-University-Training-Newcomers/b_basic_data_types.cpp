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
    
    int n;
    long long ll;
    char ch;
    float f;
    double d;

    cin >> n >> ll >> ch >> f >> d;
    cout << n << endl << ll << endl << ch << endl << f << endl << d << endl;

    return 0;
}
