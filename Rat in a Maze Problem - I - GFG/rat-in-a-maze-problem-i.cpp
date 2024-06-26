//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void func(int i,int j,vector<vector<int>> &m,int n,string move,vector<vector<int>> &vis, 
                    vector<string> &ans,int di[],int dj[]){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
        string dir="DLRU";
        for(int idx=0;idx<4;idx++){
            int nexti=i+di[idx];
            int nextj=j+dj[idx];
            if(nexti<n && nextj<n && nexti>=0 && nextj>=0 && !vis[nexti][nextj] && m[nexti][nextj]==1){
                vis[i][j]=1;
                func(nexti,nextj,m,n,move+dir[idx],vis,ans,di,dj);
                vis[i][j]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int>(n,0));
        int di[]={+1,0,0,-1};
        int dj[]={0,-1,+1,0};
        if(m[0][0]) func(0,0,m,n,"",vis,ans,di,dj);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends