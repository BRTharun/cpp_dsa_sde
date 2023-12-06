class Solution {
public:
    void func(int idx,vector<int> can,int tar,vector<vector<int>> &ans,vector<int> &ds){
        if(idx==can.size()){
            if(tar==0){
                ans.push_back(ds);
            }
            return;
        }
        if(can[idx]<=tar){
            ds.push_back(can[idx]);
            func(idx,can,tar-can[idx],ans,ds);
            ds.pop_back();
        }
        func(idx+1,can,tar,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(0,candidates,target,ans,ds);
        return ans;
    }
};