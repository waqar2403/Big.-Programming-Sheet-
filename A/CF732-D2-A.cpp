#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
   int k,r;
    cin>>k>>r;
    string s = to_string(k);
    if(s.back() == char(r)) {
        cout<<"1"<<endl;
        return;
    }
    for (int i = 1; i <= 1000; i++) {
        int temp = k * i;
        string st = to_string(temp);
        if (st.back() == r + '0' || temp % 10 == 0) {
            cout << i << endl;
            return;
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

    int t =1;
    //cin >> t;

    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}
