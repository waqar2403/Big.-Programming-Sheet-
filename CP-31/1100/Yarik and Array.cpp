#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll     long long
//#define int long long
using namespace std;
void solve(int t) {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    int sum=INT_MIN;
    int temp= 0;
    for(int i=0;i<n;i++) {
        temp+=v[i];
        sum = max(sum,temp);
        if( abs(v[i]%2) == abs(v[i+1]%2)) {
            temp =0;
        }
        if(temp<0) {
            temp=0;
        }
    }
    cout<<sum<<endl;
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
