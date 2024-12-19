#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
 int n;
    cin>>n;
    string base = "ROYGBIV";
    string tail = "GBIV";
    string res = "";
    res += base;
    for (int i = 7; i < n; i++) {
        res += tail[(i - 7) % 4];
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
