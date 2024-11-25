#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    string s ;
    cin>>s;
    int count =0;int x=11;
    if(s.length()<2) {
        cout<<0<<endl;
        return;
    }
    while(x>=10) {
     x=0;
        for(auto i:s) {
            x += (i-'0');
        }
        s = to_string(x);
        count++;
    }
    cout<<count<<endl;
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
