class Solution {
public:
    int uniquePaths(int m, int n) {
        int v=m+n-2;
        int r=m-1;
        long ans=1;
        for(int i=1;i<=r;i++){
            ans=ans*(v-r+i)/i;
        }
        return int(ans);
    }
};