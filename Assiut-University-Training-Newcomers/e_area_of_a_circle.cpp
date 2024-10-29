#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    float pi, r, area;
    pi = 3.141592653;
    cin >> r;

    area = pi * r * r;
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
