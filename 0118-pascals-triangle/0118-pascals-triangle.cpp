class Solution {
public:
    vector<int> ncr(int r){
        int ans=1;
        vector <int> arr;
        arr.push_back(ans);
        for(int i=1;i<r;i++){
            ans=ans*(r-i);
            ans=ans/i;
            arr.push_back(ans);
        }
        return arr;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr_f;
        for(int i=1;i<=numRows;i++){
            arr_f.push_back(ncr(i));
        }
        return arr_f;
    }
};