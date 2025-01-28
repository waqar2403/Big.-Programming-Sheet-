#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 ll mmax=0,mmin=1e9,x,sum=0,n,m;
cin>>n>>m;
while(n--){
cin>>x;
mmax=max(mmax,x);
mmin=min(mmin,x);
if(mmax-mmin>m*2) sum++,mmax=x,mmin=x;
			}
cout<<sum<<endl;
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
