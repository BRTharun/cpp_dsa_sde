class Solution {
public:
    
    
    void func(int col,vector<string> &board,vector<vector<string>> &ans,vector<int>& leftRow,
             vector<int> &upperDgl,vector<int> &lowerDgl,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftRow[row]==0 && upperDgl[(n-1)+(col-row)]==0 && lowerDgl[col+row]==0){
                board[row][col]='Q';
                leftRow[row]=1;
                upperDgl[(n-1)+(col-row)]=1;
                lowerDgl[col+row]=1;
                func(col+1,board,ans,leftRow,upperDgl,lowerDgl,n);
                leftRow[row]=0;
                upperDgl[(n-1)+(col-row)]=0;
                lowerDgl[col+row]=0;
                board[row][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++) board[i]=s;
        vector<int> leftRow(n,0),upperDgl(2*n-1,0),lowerDgl(2*n-1,0);
        func(0,board,ans,leftRow,upperDgl,lowerDgl,n);
        return ans; 
    }
};