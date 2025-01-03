#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#define ll     long long
using namespace std;
void solve(int t) {
    int n,k;
    cin>>n>>k;
    vector<long long int> a(n),b(n);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;

    int res=0;
    int cval = 0;
    int bmax = 0;
    for(int i=0;i<min(n,k);i++) {
        cval += a[i];
        bmax = max((bmax*1ll),b[i]);
        res = max(res,cval+(bmax*(k-i-1)));
    }
    cout<<res<<endl;
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
