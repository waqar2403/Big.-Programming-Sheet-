#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    int bsize,m;
    cin>>bsize>>m;
    int arr[m][2],cmb=0,cm=0;
    for(int i=0;i<m;i++) {
        cin>>arr[i][0]>>arr[i][1];
        cmb += arr[i][0];
        cm += arr[i][0]*arr[i][1];
    }
    if(bsize >= cmb) {
        cout<<cm<<endl;
        return;
    }
    int count =0;
    while(bsize) {
        int x=0;
        for(int i=0;i<m;i++) {
            if(arr[x][1] < arr[i][1]) {
                x=i;
            }
        }
        if(bsize <= arr[x][0]) {
            count += arr[x][1]*bsize;
            cout<<count<<endl;
            return;
        }
        if(bsize > arr[x][0]) {
            count += arr[x][0]*arr[x][1];
            bsize -= arr[x][0];
            arr[x][1] = 0;
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
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}
