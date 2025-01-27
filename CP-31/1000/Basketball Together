#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
   ll n,d;
   cin>>n>>d;
   vector<ll> a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a.begin(),a.end(),greater<int>());
   ll l=0;ll r=n-1;
   while(l<=r){
   	ll g = d/a[l];
   	r -=g;
   	if(r<l)break;
   	l++;
   }
   cout<<l<<"\n";
}
int main() {
    int t=1;
 //   cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
