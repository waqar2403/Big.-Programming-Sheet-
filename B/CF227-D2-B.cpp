#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n;
    cin>>n;
    unordered_map<int,int> fm(n+1);
    unordered_map<int,int> rm(n+1);
    vector<int> v(n+1);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        fm[v[i]] = i+1;
    }
    int x=1;
    for(int i=n-1;i>=0;i--) {
        rm[v[i]] = x;x++;
    }
    int q;
    cin>>q;
    vector<int> vq(q);
    for(int i=0;i<q;i++) {
        cin>>vq[i];
    }
    long long g =0;long long s=0;
    for(auto a :vq) {
        g += fm[a];
        s += rm[a];
    }
    cout<<g <<" "<<s<<"\n";
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
