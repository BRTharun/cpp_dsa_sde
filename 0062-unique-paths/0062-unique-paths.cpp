class Solution {
public:
    int uniquePaths(int m, int n) {
        int num=m+n-2;
        long sum=1;
        int r=m-1;
        for(int j=1;j<=r;j++){
            sum=sum*(num-r+j)/j;
        }
        return (int)sum;
    }
};