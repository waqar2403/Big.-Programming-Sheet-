// O(n^2) can be improved to O(n) by using stack
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int t) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int res = 0;

    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(v[j] >= v[j+1]) {
                count++;
            } else {
                break;
            }
        }
        for(int j = i - 1; j >= 0; j--) {
            if(v[j] >= v[j-1]) {
                count++;
            } else {
                break;
            }
        }
        res = max(res, count);
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
   // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}
