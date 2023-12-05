class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxii=0;
        int ctr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ctr++;
                maxii=max(maxii,ctr);
            }
            else{
                ctr=0;
            }
        }
        return maxii;
    }
};
