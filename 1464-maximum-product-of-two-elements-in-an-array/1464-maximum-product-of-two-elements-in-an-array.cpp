class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            ans = ((nums[n - 1] - 1) * (nums[n - 2] - 1));
        }
        return ans;
    }
};