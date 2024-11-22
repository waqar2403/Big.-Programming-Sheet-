#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    int res=v[0];
    int e=0;
    for(int i=0;i<n-1;i++) {
        if(v[i] >= v[i+1]) {
            e += v[i]-v[i+1];
        }
        else {
            if(e >= (v[i+1]-v[i] ))
            {
                e -= v[i+1]-v[i];
            }
            else {
                res += v[i+1]-v[i]-e;
                e=0;
            }
        }
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
   // cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
