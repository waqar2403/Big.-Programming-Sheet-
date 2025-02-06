#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 ll a,b,kx,ky,qx,qy;
 ll c=0;
 cin>>a>>b>>kx>>ky>>qx>>qy;
 ll x[8]={-a,-a,-b,-b,a,a,b,b},y[8]={b,-b,a,-a,b,-b,a,-a};
 for(int i=0;i<8;i++){
 	for(int j=0;j<8;j++){
 		if(kx+x[i]==qx+x[j]&&ky+y[i]==qy+y[j]){
 			c++;
 		}
 	}
 }
 if(a==b) c /=4;
 cout<<c<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
