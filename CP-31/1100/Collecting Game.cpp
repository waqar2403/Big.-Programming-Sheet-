#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll     long long
//#define int long long
using namespace std;
void solve(int t) {
    int n; cin >> n;
    vector<pair<ll,ll>> a(n);
    vector<ll> r(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    ll p = 0;
    for (int i = 0; i < n; i++) {
        p += a[i].first;
        int k = i + 1;
        while (k < n && a[k].first <= p) p += a[k].first, k++;
        for (int y = i; y < k; y++) {
            r[a[y].second] = k - 1;
        }
        i = k - 1;
    }
    for (int i = 0; i < n; i++) cout << r[i] << " ";
    cout << endl;
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
