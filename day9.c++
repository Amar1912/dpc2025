#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

string reverseWords(string s) {
    stack<string> st;
    string word;
    stringstream ss(s);

    while (ss >> word) {
        st.push(word);
    }

    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
        if (!st.empty()) result += " ";
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string ans = reverseWords(s);
    cout << "Reversed string: " << ans << endl;

    return 0;
}
