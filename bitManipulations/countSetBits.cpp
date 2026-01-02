#include <iostream>

using namespace std;

class Solution {
   public:
    uint32_t countSetBits(int num) {
        uint32_t count = 0;
        uint32_t n = (uint32_t)num;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    uint32_t countSetBits2(int n) {
        uint32_t count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};

int main() {
    Solution s;
    cout << s.countSetBits(-7) << endl;
    cout << s.countSetBits2(-7) << endl;
    return 0;
}