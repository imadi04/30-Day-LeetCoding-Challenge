class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,1);
        int temp=1;
        for(int i=0;i<n;i++){
            v[i]=temp;
            temp*=nums[i];
        }
        temp=1;
        for(int j=n-1;j>=0;j--){
            v[j]*=temp;
            temp*=nums[j];
        }
        return v;
    }
};