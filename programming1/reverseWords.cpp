#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
   public:
    string reversewords(string s) {
        int n = s.size();
        reverse(s.begin(), s.end());
        int start = 0;
        for (int end = 0; end < n; end++) {
            if (s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
        reverse(s.begin() + start, s.end());
        return s;
    }
};

int main() {
    Solution sol;
    string str = "hello world from cpp";
    string revStr = sol.reversewords(str);
    cout << "Reversed words: " << revStr << endl;
    return 0;
}