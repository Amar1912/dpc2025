#include <iostream>
using namespace std;

string expandFromCenter(string s, int left, int right) {
    while(left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if(s.size() <= 1) return s;
    string longest = "";
    for(int i = 0; i < s.size(); i++) {
        string odd = expandFromCenter(s, i, i);
        if(odd.size() > longest.size()) longest = odd;
        string even = expandFromCenter(s, i, i + 1);
        if(even.size() > longest.size()) longest = even;
    }
    return longest;
}

int main() {
    string s = "babad";
    cout << longestPalindrome(s);
    return 0;
}


int main() {
    string s = "[{()}]";
    if(isValid(s))
        cout << "true";
    else
        cout << "false";
    return 0;
}
