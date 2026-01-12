#include <algorithm>
#include <iostream>

using namespace std;

class Sloution {
   public:
    string reverseString(string s) {
        int len = s.size();
        int i = 0;
        string revs = "";
        len--;
        for (int i = 0; i < s.size(); i++) {
            cout << "revs[" << i << "] = s[" << len << "]" << endl;
            revs += s[len];
            len--;
        }
        return revs;
    }
};

int main() {
    Sloution sol;
    string str = "hello";
    string revStr = sol.reverseString(str);
    cout << "Reversed string: " << revStr << endl;
    return 0;
}