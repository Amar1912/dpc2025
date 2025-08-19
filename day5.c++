#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;

    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i+1; j < n; j++) {   
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;  
            }
        }
        if (isLeader) {
            leaders.push_back(arr[i]);
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = findLeaders(arr);

    cout << "Leaders: ";
    for (int x : leaders) {
        cout << x << " ";
    }
    return 0;
}
