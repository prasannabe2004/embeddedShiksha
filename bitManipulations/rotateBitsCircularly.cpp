#include <iostream>

using namespace std;

class Solution {
   public:
    uint32_t rotateBitsCircularlyRight(uint32_t n, int k) {
        int num_of_bits = sizeof(n) * 8;
        uint32_t res = 0;
        uint32_t left = n >> k;
        cout << hex << left << endl;
        uint32_t right = n << (num_of_bits - k);
        cout << hex << right << endl;
        res = left | right;
        return res;
    }
    uint32_t rotateBitsCircularlyLeft(uint32_t n, int k) {
        int num_of_bits = sizeof(n) * 8;
        uint32_t res = 0;
        uint32_t left = n << k;
        uint32_t right = n >> (num_of_bits - k);
        res = left | right;
        return res;
    }
};

int main() {
    Solution s;
    uint32_t v = 0x12345678;
    cout << hex << v << endl;
    uint32_t val = s.rotateBitsCircularlyRight(v, 8);
    cout << hex << s.rotateBitsCircularlyLeft(val, 8) << endl;
    return 0;
}