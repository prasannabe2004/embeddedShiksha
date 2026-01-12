#include <iostream>
#include <vector>

using namespace std;

class solution {
   public:
    int findMissingNumber2(vector<int>& nums) {
        int n = nums.size();
        int xor_all = 0;
        int xor_array = 0;
        for (int i = 0; i <= n; i++) {
            xor_all ^= i;
        }
        for (int num : nums) {
            xor_array ^= num;
        }
        return xor_all ^ xor_array;
    }
    int findMissingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return total - sum;
    }
};

int main() {
    solution sol;
    vector<int> nums = {3, 0, 1};
    int missingNumber = sol.findMissingNumber(nums);
    cout << "Missing number is: " << missingNumber << endl;
    missingNumber = sol.findMissingNumber2(nums);
    cout << "Missing number using XOR is: " << missingNumber << endl;
    return 0;
}