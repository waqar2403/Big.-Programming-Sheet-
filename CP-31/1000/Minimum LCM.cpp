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
 ll x=1;
 for(ll i=2;i<=sqrt(n);i++){
 	if(n%i == 0){
 		x = n/i;
 		break;
 	}
 }
 cout<<x<<" "<<n-x<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
