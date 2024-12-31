#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
void solve(int t) {
    string s;
    cin>>s;
    int zeros=0,ones=0;
    for(auto i:s) {
        if(i == '0') {
            zeros++;
        }
        else {
            ones++;
        }
    }
    int i=0;
    for( i=0;i<s.size();i++) {
        if(s[i] == '0') {
            if(ones>0) {
                ones--;
            }
            else {
                break;
            }
        }
        else {
            if(zeros>0) {
                zeros--;
            }
            else {
                break;
            }
        }
    }
    cout<<s.size()-i<<endl;
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
 