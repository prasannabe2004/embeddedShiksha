#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    vector<int> moveZerosToEnd(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[count++] = nums[i];
            }
        }
        while (count < n) {
            nums[count++] = 0;
        }
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> result = sol.moveZerosToEnd(nums);
    cout << "Array after moving zeros to the end: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}