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
 set<int> st;
 for(int i=0;i<n;i++){
 	int x;
 	cin>>x;
 	st.insert(x);
 }
 if(st.size()==n) cout<<"NO\n";
 else cout<<"YES\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
