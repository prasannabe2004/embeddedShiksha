#include <iostream>

using namespace std;

class Solution {
   public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i++] != s[j--]) return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrome("A man, a plan, a canal: Panama") << endl;
    cout << s.isPalindrome("race a car") << endl;
    cout << s.isPalindrome("aba") << endl;
    return 0;
}