#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 int n,x;
 cin>>n>>x;
 int mdif=-1;
 vector<int> a(n);
 for(int i=0;i<n;i++) {
 	int t;
 	cin>>t;
 	a[i]=t;
 	if(i!=0){
 		mdif = max(mdif,abs(t-a[i-1]));
 	}
 }
 int l = 2*abs(a[n-1]-x);
 int l2 = abs(0-a[0]);
 int h = max(l,l2);
 cout<<max(h,mdif)<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
