#include <iostream>
#include <vector>
using namespace std;

int findDuplicateno(vector<int>& nums) {
    int lowpt = 1, highpt = nums.size() - 1;
    int duplicateno = -1;

    while (lowpt <= highpt) {
        int mid = (lowpt + highpt) / 2;

       
        int count = 0;
        for (int num : nums) {
            if (num <= mid) count++;
        }

        if (count > mid) {
            duplicateno = mid;     
            highpt = mid - 1;
        } else {
            lowpt = mid + 1;
        }
    }

    return duplicateno;
}

int main() {
    vector<int> arr = {3, 1, 4, 4, 2};
    cout << "Duplicate number: " << findDuplicateno(arr) << endl;
    return 0;
}
