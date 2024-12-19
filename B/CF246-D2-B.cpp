#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
//flip flop technique
void solve(int t) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string res;

    if (n % 2 == 0) {
        res += s[0];
        for (int i = 1; i < n; i++) {
            if (i % 2 != 0) {
                res.append(1, s[i]);
            } else {
                res.insert(res.begin(), s[i]);
            }
        }
    } else {
        res += s[0];

        for (int i = 1; i < n; i++) {
            if (i % 2 != 0) {
                res.insert(res.begin(), s[i]);
            } else {
                res.append(1, s[i]);
            }
        }
    }

    cout << res << endl;
}
int main() {
#ifndef ONLINE_JUDGE
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile || !outFile) {
        cerr << "Error opening files." << endl;
        return 1;
    }
    cin.rdbuf(inFile.rdbuf());
    cout.rdbuf(outFile.rdbuf());
#endif

    int t=1;
    //cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
