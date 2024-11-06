#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i].first>>v[i].second;
    }
    int cnt =0;
    for (auto a:v) {
        for (int i=0;i<n;i++) {
            if(a != v[i]) {
                if(a.first == v[i].second)
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;
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

    int t =1;
    //cin >> t;

    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}
