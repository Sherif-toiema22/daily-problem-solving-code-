#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> pairs = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if (pairs.find(c) == pairs.end()) {
                st.push(c);
            } else if (!st.empty() && pairs[c] == st.top()) {
                st.pop();
            } else {
                return false;
            }
        }

        return st.empty();
    }
};

int main() {
    Solution solution;
    string input;
    cin >> input;

    cout << boolalpha << solution.isValid(input) << '\n';
    return 0;
}
