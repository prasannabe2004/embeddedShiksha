#include <iostream>

using namespace std;

class Solution {
   public:
    int reverseBits(int n) {
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            ans = (ans << 1) | (n & 1);
            n >>= 1;
        }
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.reverseBits(43261596) << endl;
    return 0;
}