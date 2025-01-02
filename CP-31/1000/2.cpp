#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int d = k-1;
    int e_count = 0;
    for(int i=0;i<n;i++) {
        if(v[i]%2==0){e_count++;}
        if(v[i]%k==0){d=0;}
        else {
           d= min(d,k-v[i]%k);
        }
    }
    if(k!=4) {
        cout<<d<<endl;
    }
    else {
        if(e_count>1) {
            cout<<0<<endl;
        }
        else if (e_count==1) {
            cout<<min(d,1)<<endl;
        }
        else {
            cout<<min(d,2)<<endl;
        }
    }
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
