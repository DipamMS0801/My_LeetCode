class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int minm=INT_MAX;
        int maxm=INT_MIN;
        for(int i=0; i<n; i++){
            minm=min(minm, nums[i]);
            maxm=max(maxm, nums[i]);
        }

        unordered_set<int> s;
        for(int i:nums){
            s.insert(i);
        }
        vector<int> ans;
        for(int i=minm; i<=maxm; i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};