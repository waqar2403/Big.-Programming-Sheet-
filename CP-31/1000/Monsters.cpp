#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll     long long
//#define int long long
using namespace std;
void solve(int t) {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    vector<pair<int,int>> hp;
    for(int i=0;i<n;i++) {
        if(v[i] %k ==0) {
            hp.push_back({k,-i});
        }
        else {
            hp.push_back({v[i]%k,-i});
        }
    }
    sort(hp.begin(),hp.end());
    for(int i=n-1;i>=0;i--) {
        cout<<abs(hp[i].second)+1<<" ";
    }
    cout<<endl;
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
