#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 int n,q;
 cin>>n>>q;
 vector<ll> a(n),x(q);
 for(int i=0;i<n;i++) cin>>a[i];
 ll tem = 1e15;
 while(q--){
 	ll qe;cin>>qe;
 	if(qe>=tem) continue;
 	tem=qe;
 	for(int j=0;j<n;j++){
 	ll power_of_2 = 1<<qe;
            if (a[j] % power_of_2 == 0) {
                a[j] += 1<<(qe-1); 
            }
 }
}
for(auto i:a) cout<<i<<" ";
cout<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}