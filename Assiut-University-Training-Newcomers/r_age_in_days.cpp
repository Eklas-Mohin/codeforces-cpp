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
    
    int n, years, months;
    cin >> n;

    years = n / 365;
    n = n % 365;
    months = n / 30;
    n = n % 30;
    
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << n << " days" << endl;
    
    return 0;
}
