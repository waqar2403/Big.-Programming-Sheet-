#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(ll t) {
 ll n;
 cin>>n;
 ll k=n;
 while(k>0){
     ll a = k%10;
     k /= 10;
     if(a>0 && n%a !=0){
     	n++;
     	k =n;
     }
 }
 cout<<n<<"\n";
}
int main() {
    ll t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
