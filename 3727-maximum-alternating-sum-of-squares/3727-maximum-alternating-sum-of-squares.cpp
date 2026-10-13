class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int i=0; i<nums.size(); i++){
            nums[i]=nums[i]*nums[i];
        }

        sort(nums.begin(), nums.end());

        long long smallhalf=accumulate(begin(nums), begin(nums) + n/2, 0LL);
        long long largehalf=accumulate(begin(nums) + n/2, end(nums), 0LL);
        return largehalf - smallhalf;

    }
};