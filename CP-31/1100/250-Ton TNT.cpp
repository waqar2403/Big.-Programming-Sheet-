#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define LL   long long
//#define int long long
using namespace std;
void solve(int t) {
    int n;
    cin >> n;
    vector<long long> f(n);
    for (LL i = 0; i < n; i++) {
        cin >> f[i];
        if (i > 0) f[i] += f[i - 1];
    }

    long long cnt = 0;
    for (LL i = 1; i <= n; i++) {
        if (n % i == 0) {
            long long maxf = LLONG_MIN, minf = LLONG_MAX;
            for (LL j = i - 1; j < n; j += i) {
                long long diff = f[j] - (j - i >= 0 ? f[j - i] : 0);
                maxf = max(maxf, diff);
                minf = min(minf, diff);
            }
            cnt = max(cnt, maxf - minf);
        }
    }
    cout << cnt << endl;
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
