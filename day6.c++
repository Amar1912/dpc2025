#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>> findZeroSumSubarrays(vector<int>& arr) {
    int n = arr.size();
    vector<pair<int,int>> result;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                result.push_back({i, j});
            }
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    vector<pair<int,int>> res = findZeroSumSubarrays(arr);

    if (res.empty()) {
        cout << "No subarray with zero sum found\n";
    } else {
        for (auto &p : res) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
    }
    return 0;
}
