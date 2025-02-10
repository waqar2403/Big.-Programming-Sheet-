#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 string a,b;
 cin>>a>>b;
 int n=a.size();int m=b.size();
 int ans=0;
 for(int i=0;i<n;i++){
 	for(int j=0;j<m;j++){
 		if(a[i] == b[j]){
 			int l=i;int r =j;int c=0;
 			while(l<n && r<m){
 				if(a[l] == b[r]){
 					c++;
 				}else break;
 				l++;r++;
 			}
 			ans = max(ans,c);
 		}
 	}
 }
 cout<<(n+m-2*ans)<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
