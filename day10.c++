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

    for (string w : strs) {
        string key = sortWord(w);
        mp[key].push_back(w);
    }

    vector<vector<string>> result;
    for (auto it : mp) {
        result.push_back(it.second);
    }

    cout << "[ ";
    for (auto group : result) {
        cout << "[ ";
        for (string w : group) {
            cout << w << " ";
        }
        cout << "] ";
    }
    cout << "]\n";

    return 0;
}
