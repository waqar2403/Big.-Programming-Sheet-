#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 ll a,b;
 cin>>a>>b;
 ll ans=LLONG_MAX;
 for(int i=0;i<=10;i++){
 	ll te = a;
 	if((b+i) >=2){
 		ll c=i;
 		while(te){
 			te /= (b+i);
 			c++;
 		}
 		ans = min(c,ans);
 }
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
