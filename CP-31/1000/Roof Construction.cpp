#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve() {
	int n;
 cin>>n;
 int t=1;
while(t*2<n){
			t*=2;
		}
for(int i=1;i<t;i++){
	cout<<i<<' ';
		}
		cout<<"0 ";
for(int i=t;i<n;i++){
	cout<<i<<' ';
		}
	cout<<'\n';
} 
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve();
    }
    return 0;
}
