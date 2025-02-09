#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 ll n;
 cin>>n;
 vector<pair<ll,ll>> v(n+1);
 for(ll i=1;i<=n;i++){
 	cin>>v[i].first;
 	v[i].second = i;
 }
 sort(v.begin()+1,v.end(),greater<pair<ll,ll>>());
 ll tt=0;ll crcod=1;
 vector<ll> ans(n+1);
 for(ll i=1;i<=n;i++){
 	tt += 2*crcod*v[i].first;
 	
 	if(i%2 !=0){
 		ans[v[i].second] = crcod;
 	}else{
 		ans[v[i].second] = -crcod;
 		crcod++;
 	}
 }
 cout<<tt<<"\n";
 for(auto i:ans) cout<<i<<" ";
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
