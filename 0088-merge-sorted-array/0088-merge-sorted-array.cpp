class Solution {
    
public:
     void swapGrater(vector<int>& nums1, vector<int>& nums2, int idx1,int idx2) {
        if(nums1[idx1]>nums2[idx2]){
            swap(nums1[idx1],nums2[idx2]);
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len=m+n;
        int gap=(len)/2 + (len%2);
        while(gap>0){
            int left=0;
            int right=left+gap;
            while(right<len){
                if(left<m && right>=m){
                    swapGrater(nums1,nums2,left,right-m);
                    
                }
                else if(left>=m){
                    swapGrater(nums2,nums2,left-m,right-m);
                    
                }
                else{
                    swapGrater(nums1,nums1,left,right);
                    
                }
                left++,right++;
            }
            if(gap==1){
                break;
            }
            gap=(gap/2)+(gap%2);
        }
        int r = 0;
        for (int i = m; i < m + n; i++){
            nums1[i] = nums2[r++];
    }
        
    }
};