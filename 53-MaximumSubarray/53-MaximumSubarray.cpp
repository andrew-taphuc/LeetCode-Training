// Last updated: 1/28/2026, 2:48:25 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = -99999, best = -99999;
        if (nums.size() == 0) return 0;
        for(int i = 0; i < nums.size(); i++){
            sum = max(nums[i], nums[i] + sum);
            best = max(best, sum);
        }
        cout << best;
        return best;
    }
};