class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (!n) return 0;
        unordered_set<int> us;
        for(int i=0;i<n;i++){
            us.insert(nums[i]);
        }
        int lon=1;
        for(auto it:us){
            if(us.find(it-1)==us.end()){
                int ct=1;
                int x=it;
                while(us.find(x+1)!=us.end()){
                    ct+=1;
                    x+=1;
                }
                lon=max(lon,ct);
            }
        }
        return lon;
    }
};