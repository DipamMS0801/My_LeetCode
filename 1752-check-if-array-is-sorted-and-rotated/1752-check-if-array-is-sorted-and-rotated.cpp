class Solution {
public:
    bool check(vector<int>& nums) {
        int index=-1;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]<nums[i-1]){
                if(index==-1){
                    index=i;
                }
                else{
                    return false;
                }
            }
        }
        if(index==-1){
            return true;
        }
        if(nums[0]>=nums[n-1]){
            return true;
        }
        else{
            return false;
        }
    }
};