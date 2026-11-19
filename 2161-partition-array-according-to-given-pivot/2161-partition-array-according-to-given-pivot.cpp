class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> n1, n2, n3;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                n1.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                n2.push_back(nums[i]);
            }
            else{
                n3.push_back(nums[i]);
            }
        }
        
        vector<int>ans;
        for(int i = 0; i < n1.size(); i++){
            ans.push_back(n1[i]);
        }
        for(int i = 0; i < n2.size(); i++){
            ans.push_back(n2[i]);
        }
        for(int i = 0; i < n3.size(); i++){
            ans.push_back(n3[i]);
        }

        return ans;
    }
};