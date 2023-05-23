class Solution {
public:
    

void merge(vector<int> &arr1,int n, vector<int> &arr2,  int m) {
    int left=n-1;
    int right=0;
    while(left>=0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
        }
        else{
            break;
        }
        left--,right++;
    }
    sort(arr2.begin(),arr2.end());
    int in=0;
    for(int i=n;i<n+m;i++){
        arr1[i]=arr2[in];
        in++;
    }
    sort(arr1.begin(),arr1.end());
    
}
};