class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c1=0,c2=0;
        int e1=INT_MIN;
        int e2=INT_MIN;
        for(int i=0;i<n;i++){
            if(c1==0 && nums[i]!=e2){
                e1=nums[i];
                c1=1;
            }
            else if(c2==0 && nums[i]!=e1){
                e2=nums[i];
                c2=1;
            }
            else if(nums[i]==e1) c1++;
            else if(nums[i]==e2) c2++;
            else{
                c1--,c2--;
            }
        }
        vector<int> l;
        int c11=0,c22=0;
        for(int i=0;i<n;i++){
            if(nums[i]==e1) c11++;
            if (nums[i]==e2) c22++;
        }
        int mini=(int)(n/3)+1;
        if(c11>=mini) l.push_back(e1);
        if(c22>=mini) l.push_back(e2);
        sort(l.begin(),l.end());
        return l;
    }
};