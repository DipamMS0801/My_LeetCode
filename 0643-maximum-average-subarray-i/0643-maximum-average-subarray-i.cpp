class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum=0, maxSum=0;
        for(int i=0; i<k;i++){
            currentSum+=nums[i];
        }
        maxSum=currentSum;

        for(int j=k; j<nums.size();j++){
            currentSum=currentSum+nums[j]-nums[j-k];
            maxSum=max(currentSum,maxSum);
        }
        return maxSum/k;
    }
};