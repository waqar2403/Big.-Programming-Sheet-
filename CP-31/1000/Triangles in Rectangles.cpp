#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 ll h,w;
 cin>>w>>h;
 ll ans =-1;ll cnt =1;
 
 for(int i=0;i<4;i++){
 	ll mango ;
 	cin>>mango;
 	vector<ll> k(mango);
 	for(ll i =0;i<mango;i++){
 		cin>>k[i];
 	}
 	if(cnt == 1 || cnt == 2){
 		ans = max(ans,(k[mango-1]-k[0])*h);
 	}
 	else {ans = max(ans,(k[mango-1]-k[0])*w);}
 	cnt++;
 }
 cout<<ans<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
