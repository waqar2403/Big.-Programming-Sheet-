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
 vector<ll> a(n);
 vector<int> ans(n);
 unordered_map<ll,ll> mp;
 for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
    
 }
 for(int i=0;i<n;i++){ans[i] = i+1;}
 for(ll i=0;i<n;i++){
 	if(mp[a[i]] <=1){
 		cout<<"-1\n";
 		return;
 	}
 }
int i=0; 
while(i<n){
	int temp = a[i];
	int s=i;int e=i;
	while(e<n && a[e]==temp)e++;
	rotate(ans.begin()+s,ans.begin()+s+1,ans.begin()+e);
	i=e;
}
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
