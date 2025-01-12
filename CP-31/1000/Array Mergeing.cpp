#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 int n;
    cin>>n;
    vector<int> a(n),b(n);
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++) {
        cin>>b[i];
        s.insert(b[i]);
    }
    int cnt=1;
    mp1[a[0]] = 1;
    for(int i=1; i<n; i++){
        if(a[i] == a[i-1])
            cnt++;
        else
            cnt = 1;

        mp1[a[i]] = max(mp1[a[i]], cnt);
    }

    mp2[b[0]] = 1;
    cnt  = 1;
    for(int i=1; i<n; i++){
        if(b[i] == b[i-1])
            cnt++;
        else
            cnt = 1;

        mp2[b[i]] = max(mp2[b[i]], cnt);
    }

    //for every element, find the longest run
    int ans = 1;
    for(auto e:s){
        ans = max(ans, mp1[e] + mp2[e]);
    }
    cout<<ans<<endl;
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
