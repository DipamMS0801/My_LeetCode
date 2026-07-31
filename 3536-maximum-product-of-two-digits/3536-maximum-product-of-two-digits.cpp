class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;

        while(n>0){
            nums.push_back(n%10);
            n=n/10;
        }
        sort(nums.begin(), nums.end());
        int a=nums.size();
        int ans=nums[a-1]*nums[a-2];

        return ans;
    }
};