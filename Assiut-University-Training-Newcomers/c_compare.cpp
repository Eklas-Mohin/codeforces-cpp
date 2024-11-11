#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str1, str2, small;
    cin >> str1 >> str2;

    small =  str1 < str2 ? str1 : str2;
    cout << small << endl;

    return 0;
}
