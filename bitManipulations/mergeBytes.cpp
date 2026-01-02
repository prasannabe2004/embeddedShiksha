#include <iostream>

using namespace std;

class Solution {
   public:
    int mergeBytes(short int a1, short int a2) { return (a1 << 8) | a2; }
};

int main() {
    Solution s;
    cout << hex << s.mergeBytes(0x12, 0x34) << endl;
    return 0;
}
