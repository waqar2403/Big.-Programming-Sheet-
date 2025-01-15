#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#define ll   long long
using namespace std;
ll get(ll n, vector<ll>a, vector<ll>b, vector<ll>c) {
	ll fm = 0;
	ll fmid;
	for (ll i = 0; i < n; i++) {
		if (a[i] > fm) {
			fm = a[i];
			fmid = i;
		}
	}
	ll sm = 0;
	ll smid;
	for (ll i = 0; i < n; i++) {
		if (b[i] > sm && i != fmid) {
			sm = b[i];
			smid = i;
		}
	}
	ll tm = 0;
	ll tmid;
	for (ll i = 0; i < n; i++) {
		if (c[i] > tm && i != fmid && i != smid) {
			tm = c[i];
			tmid = i;
		}
	}
	return fm + sm + tm;
}
void solve(int t) {
	ll n;
	cin >> n;
	vector<ll>a(n);
	vector<ll>b(n);
	vector<ll>c(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (ll i = 0; i < n; i++) {
		cin >> c[i];
	}
	ll ans = 0;
	ans = max(ans, get(n, a, b, c));
	ans = max(ans, get(n, a, c, b));
	ans = max(ans, get(n, b, a, c));
	ans = max(ans, get(n, b, c, a));
	ans = max(ans, get(n, c, a, b));
	ans = max(ans, get(n, c, b, a));
	cout << ans;
	cout << "\n";
}
int main() {
    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
