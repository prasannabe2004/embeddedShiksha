#include <iostream>

using namespace std;

class Solution {
   public:
    int changeEndianess(int num) {
        int byte0 = (num & 0x000000FF) >> 0;
        int byte1 = (num & 0x0000FF00) >> 8;
        int byte2 = (num & 0x00FF0000) >> 16;
        int byte3 = (num & 0xFF000000) >> 24;
        return (byte0 << 24) | (byte1 << 16) | (byte2 << 8) | (byte3 << 0);
    }
};

int main() {
    Solution sol;
    int num = 0x12345678;
    int changed = sol.changeEndianess(num);
    cout << hex << "Original: 0x" << num << ", Changed Endianess: 0x" << changed
         << endl;
    return 0;
}