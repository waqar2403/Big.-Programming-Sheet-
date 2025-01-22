#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 int n;
 cin>>n;
 char c;
 cin>>c;
 string s;
 cin>>s;
 if(c == 'g') {cout<<0<<"\n";return;}
 int d=0;
 s+=s;
 int ans=0,i=(n*2)-1;
 while(i>=0){
 	if(s[i] == 'g'){
 		d=i;
 	}
 	if(s[i] ==c){
 		ans = max(d-i,ans);
 	}
 	i--;
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
