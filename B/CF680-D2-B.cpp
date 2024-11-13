#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int t) {
    int distance, numOFcity, pos, sum = 0;
	cin >> numOFcity >> pos;

	vector<int> arr(numOFcity + 1);


	for (distance = 1;distance <= numOFcity;distance++)
	{
		cin >> arr[distance];
		sum += arr[distance];
	}
	for (distance = 1; distance<pos && distance <= numOFcity - pos ;distance++)
	{
		if (arr[pos + distance] + arr[pos - distance] == 1)
			sum--;
	}

	cout << sum;
}

int main() {
#ifndef ONLINE_JUDGE
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile || !outFile) {
        cerr << "Error opening files." << endl;
        return 1;
    }
    cin.rdbuf(inFile.rdbuf());
    cout.rdbuf(outFile.rdbuf());
#endif

    int t=1;
   // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}
