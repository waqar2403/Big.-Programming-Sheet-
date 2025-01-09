#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
//#define int long long
using namespace std;
void solve(int t) {
 int n,k,q;
    cin>>n>>k>>q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {cin>>v[i];}
    ll ans = 0;
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if(v[i]<=q){cnt++;}
        else {
            if(cnt >=k){ ans += ((cnt*(cnt+1))/2) - ((k-1)*cnt - ((k-2)*(k-1))/2);}
            cnt = 0;
        }
    }
    if(cnt >= k ) {
        ans += ((cnt*(cnt+1))/2) - ((k-1)*cnt - ((k-2)*(k-1))/2);
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
