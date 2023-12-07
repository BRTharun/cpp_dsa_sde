class Solution {
public:
    void func(int idx,int tar,vector<int> &can,vector<vector<int>> &ans,vector<int> &ds){
        if(tar==0){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<can.size();i++){
            if(idx!=i && can[i]==can[i-1]) continue;
            if(can[i]>tar) break;
            ds.push_back(can[i]);
            func(i+1,tar-can[i],can,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        func(0,target,candidates,ans,ds);
        return ans;
    }
};