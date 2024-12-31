#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n;
    string s;
    cin >> n >> s;
    vector<int> f(26,0);
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if(!f[s[i]-'a']) {
            f[s[i]-'a'] =1;
            count += (n-i);
        }
    }
    cout << count << endl;
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
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
