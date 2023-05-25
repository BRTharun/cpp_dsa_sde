class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0,count2=0;
        int eval1=INT_MIN,eval2=INT_MIN;
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=eval2){
                count1=1;
                eval1=nums[i];
                
            }
            else if(count2==0 && nums[i]!=eval1){
                count2=1;
                eval2=nums[i];
                
            }
            else if(eval1==nums[i]){
                count1++;
            }
            else if(eval2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int> ls;
        int ct1=0,ct2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==eval1){
                ct1++;
            }
            if(nums[i]==eval2){
                ct2++;
            }
        }
        int mini =int(n/3)+1;
        cout<<mini<<endl;
        cout<<ct1<<" "<<ct2<<endl; 
        if(ct1>=mini) ls.push_back(eval1);
        if(ct2>=mini) ls.push_back(eval2);
        sort(ls.begin(),ls.end());
        return ls;
        
    }
};