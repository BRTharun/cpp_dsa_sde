class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i =0;i<nums.size();i++){
            int pre=nums[i];
            int tar = target-pre;
            if(mpp.find(tar)!=mpp.end()){
                return {mpp[tar],i};
            }
            mpp[pre]=i;
        }
        return {-1,-1};
        
    }
};