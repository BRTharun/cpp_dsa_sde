class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right =0;
        vector<int> mpp(256,-1);
        int n=s.size();
        cout<<n<<endl;
        // if(!n) return 0;
        // if(n==1)return 1;
        int len=0;
        while(right<n){
            if(mpp[s[right]]!=-1 ) left=max(mpp[s[right]]+1,left);
            mpp[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
        
    }
};