#include <iostream>

using namespace std;

/*
Extract range of bits from a given position in a number
eg: 0b0001010100
    extract 3 bits starting from 2nd position
Output: 0b101
*/
class solution {
   public:
    uint32_t setBits(int j) {
        uint32_t res = 0;
        for (int i = 0; i < j; i++) {
            res |= 1 << i;
        }
        cout << res << endl;
        return res;
    }
    uint32_t extractKbits(uint32_t n, int start, int end) {
        return n >> start & setBits(end - start + 1);
    }
};
int main() {
    solution sol;
    cout << sol.extractKbits(0b0001010100, 2, 6) << endl;
    return 0;
}
