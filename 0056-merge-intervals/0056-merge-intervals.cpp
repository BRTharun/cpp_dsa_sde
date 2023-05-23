class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
        int n=A.size();
        sort(A.begin(),A.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(ans.empty() || ans.back()[1]<A[i][0]){
                ans.push_back(A[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],A[i][1]);
            }
        }
        return ans;
        
    }
};