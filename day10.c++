#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string sortWord(string s) {
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            if (s[i] > s[j]) {
                // swap
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    return s;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> mp;

    // Group by sorted form
    for (string w : strs) {
        string key = sortWord(w);
        mp[key].push_back(w);
    }

    // Print groups
    for (auto it : mp) {
        cout << "[ ";
        for (string w : it.second) {
            cout << w << " ";
        }
        cout << "]\n";
    }

    return 0;
}
