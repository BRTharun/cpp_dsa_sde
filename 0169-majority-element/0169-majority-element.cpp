class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int eval;
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                eval=nums[i];
                
            }
            else if(eval==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==eval){
                count1++;
            }
        }
        if(count1>(n/2)) return eval;
        return -1;
    }
};