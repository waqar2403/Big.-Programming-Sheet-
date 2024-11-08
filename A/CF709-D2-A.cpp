#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
        int n,b,d;
    cin>>n>>b>>d;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int count =0;
    int temp=0;
    for(int i=0;i<n;i++) {
        if(v[i] <= b) {
            temp += v[i];
        }
        if(temp > d) {
            count++;
            temp =0;
        }
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

    int t =1;
    //cin >> t;

    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}
