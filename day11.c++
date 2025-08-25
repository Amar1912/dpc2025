#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s = "abc"; 
    vector<string> permutations;

    sort(s.begin(), s.end()); 

    do {
        permutations.push_back(s);
    } while (next_permutation(s.begin(), s.end())); 

    for (auto p : permutations) {
        cout << p << endl;
    }

    return 0;
}
