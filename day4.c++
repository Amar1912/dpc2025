#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int>& array1, vector<int>& array2) {
    int m = array1.size();
    int n = array2.size();

    int i = 0;
    while (i < m) {
        if (array1[i] > array2[0]) {
            
            swap(array1[i], array2[0]);

            int first = array2[0];
            int k = 1;
            while (k < n && array2[k] < first) {
                array2[k - 1] = array2[k];
                k++;
            }
            array2[k - 1] = first;
        }
        i++;
    }
}

int main() {
    vector<int> array1 = {1, 4, 7, 8, 10};
    vector<int> array2 = {2, 3, 9};

    mergeArrays(array1, array2);

    cout << "array1: ";
    for (int x : array1) cout << x << " ";
    cout << "\narray2: ";
    for (int x : array2) cout << x << " ";
}
