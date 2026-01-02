#include <iostream>

using namespace std;

class Solution {
   public:
    void evenOrOdd(uint32_t n) {
        if (n & 1)
            cout << "Odd" << endl;
        else
            cout << "Even" << endl;
    }
};

int main() {
    Solution s;
    s.evenOrOdd(7);
    s.evenOrOdd(6);
}