#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
  ll n,x;
 cin>>n>>x;
 vector<ll> v(n);
 for(ll i=0;i<n;i++) cin>>v[i];
 ll l=1,r = 2E9;
 while(l <= r){
 	ll m = (l+r)>>1,s=0;
 	for(int i=0;i<n;i++){
 		if(m > v[i] ) s += m-v[i]; 
 	}
 	if(s <= x) l = m+1;
 	else r= m-1;
 }
 cout<<r<<endl;
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
