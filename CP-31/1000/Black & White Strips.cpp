#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (n == 1) {
        cout << (s[0] == 'W' ? "1\n" : "0\n");
        return;
    }
    if (k == n) {
        cout << count(s.begin(), s.end(), 'W') << "\n";
        return;
    }

    int w = INT_MAX, w_count = 0;
    
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') w_count++;
    }
    
    w = w_count;

    for (int i = k; i < n; i++) {
        if (s[i - k] == 'W') w_count--;
        if (s[i] == 'W') w_count++;
        w = min(w, w_count);
    }

    cout << w << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve(t);
    return 0;
}
