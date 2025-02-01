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
 string s;
 cin>>s;
 if(s.find("...") != string::npos){
 	cout<<"2\n";
 	return;
 }
 cout<<count(s.begin(),s.end(),'.')<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
