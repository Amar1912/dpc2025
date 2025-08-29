#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            left++;
        }
        charSet.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl; // Output: 3
    return 0;
}
