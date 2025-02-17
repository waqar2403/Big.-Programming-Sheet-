#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
#define pii  pair<long long,long long>
using namespace std;
ll d(pii a,pii b){
	return (abs(a.first-b.first)+ abs(a.second-b.second));
}
void solve(int t) {
 int n,k,a,b;
 cin>>n>>k>>a>>b;
 vector<pii> v(n+1);
 for(int i=1;i<=n;i++){
 	cin>>v[i].first>>v[i].second;
 }
 ll x = 1e18;ll y =1e18;
 for(int i=1;i<=k;i++){
 	x = min(x,d(v[i],v[a]));
 	y = min(y,d(v[i],v[b]));
 }
 cout<<min((x+y), d(v[a],v[b]))<<"\n";
 
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
