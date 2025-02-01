#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 int n,r,b;
 cin>>n>>r>>b;
 int p = r/(b+1);
 int q = r%(b+1);
 for(int i=0;i<q;i++){
 	cout<<string(p+1,'R')<<'B';
 }
 for(int i=q;i<b;i++){
 	cout<<string(p,'R')<<'B';
 }
 cout<<string(p,'R')<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
