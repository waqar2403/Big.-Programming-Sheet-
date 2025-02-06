#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 unordered_map<char,int> mp;
 for(auto i:s) mp[i]++;
 int aho=0;
 for(auto i:mp){
 	if(i.second%2 != 0){
 		aho++;
 	}
 }
 if(aho>k+1){
 	cout<<"NO\n";
 	return;
 }
 cout<<"YES\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
