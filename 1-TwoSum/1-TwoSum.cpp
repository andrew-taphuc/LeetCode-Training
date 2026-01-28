// Last updated: 1/28/2026, 2:48:31 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }
    return {}; // bắt buộc có
}
};