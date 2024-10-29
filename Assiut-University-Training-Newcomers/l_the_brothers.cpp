#include <iostream>
#include <string>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string first_name, second_name;
    getline(cin, first_name);
    getline(cin, second_name);

    int len1 = first_name.length() - 1;
    int len2 = second_name.length() - 1;

    while (first_name[len1] == second_name[len2]) {
        if (first_name[len1] == ' ') {
            cout << "ARE Brothers" << endl;
            return 0;
        }
        len1--;
        len2--;
    }

    cout << "NOT" << endl;

    return 0;
}

