#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
void solve(int t) {
 int x;
 cin>>x;
 string s;
 cin>>s;int op=0;
 int cl=0;
 for(auto i:s){
 	if(i == '('){
 	op++;
 	}
 	else if(op) op--;
 	else cl++;
 }
 cout<<(op+cl)/2<<"\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
