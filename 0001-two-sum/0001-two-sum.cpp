class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int present=nums[i];
            int moreReq=target-present;
            if(mpp.find(moreReq)!=mpp.end()){
                return {mpp[moreReq],i};
            }
            mpp[present]=i;
        }
        return {-1,-1};
    }
};