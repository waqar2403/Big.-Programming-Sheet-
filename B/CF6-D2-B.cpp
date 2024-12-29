#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n, m;
    cin >> n >> m;
    char a;
    cin >> a;

    vector<vector<char>> v(n, vector<char>(m));
    unordered_set<char> visited;
    visited.insert('.');

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    unordered_set<char> unique_neighbors;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == a) {
                for (auto [dx, dy] : directions) {
                    int ni = i + dx, nj = j + dy;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        char neighbor = v[ni][nj];
                        if (neighbor != a && neighbor != '.' && unique_neighbors.find(neighbor) == unique_neighbors.end()) {
                            unique_neighbors.insert(neighbor);
                        }
                    }
                }
            }
        }
    }


    cout << unique_neighbors.size() << endl;

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
     while(t--) {
        solve(t);
    }
    return 0;
}
