#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str;
    vector<string> vs;

    while(cin >> str) {
        vs.push_back(str);
    }

    for (int i = 0; i < vs.size(); ++i) {
        if(vs[i] == "1999") {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    
    return 0;
}
