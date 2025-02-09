#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
vector<int> x(3e5+10);
void solve(int t) {
 int a,b;
 cin>>a>>b;
 int c = x[a-1];
 if(c == b){
 	cout<<a<<"\n";
 }else{
 	if((c^b) != a){
 		cout<<a+1<<"\n";
 	}else{
 		cout<<a+2<<"\n";
 	}
 }
}
int main() {
    int t=1;
    x[0]=0;
    for(int i=1;i<=3e5+10;i++){
 	x[i] = x[i-1]^i;
 }
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
