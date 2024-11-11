// O(n^2) can be improved to O(n) by using stack
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int max_watered_sections = 1;  // Initialize to 1 since minimum answer is 1

    for (int i = 0; i < n; i++) {
        int count = 1;  // Count the section itself

        // Count leftwards
        for (int j = i - 1; j >= 0; j--) {
            if (heights[j] <= heights[j + 1]) {
                count++;
            } else {
                break;
            }
        }

        // Count rightwards
        for (int j = i + 1; j < n; j++) {
            if (heights[j] <= heights[j - 1]) {
                count++;
            } else {
                break;
            }
        }

        // Update the maximum number of watered sections
        max_watered_sections = max(max_watered_sections, count);
    }

    cout << max_watered_sections << endl;
    return 0;
}
