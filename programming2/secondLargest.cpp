#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    int secondLargest(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        for (int num : nums) {
            if (num > first) {
                second = first;
                first = num;
            } else if (num > second && num < first) {
                second = num;
            }
        }
        return (second == INT_MIN) ? -1 : second;
    }
    int secondLargest2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < nums[n - 1]) {
                return nums[i];
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 5, 2, 9, 6, 9, 1};
    int result = sol.secondLargest(nums);
    if (result != -1) {
        cout << "The second largest number is: " << result << endl;
    } else {
        cout << "There is no second largest number." << endl;
    }
    result = sol.secondLargest2(nums);
    cout << "The second largest number using sorting is: " << result << endl;
    return 0;
}