int maxSubArray(vector<int>& nums) {
        int local_max=0;
        int n=nums.size();
        int final_max=INT_MIN;
         for(int i=0;i<n;i++){
             local_max=max(nums[i],nums[i]+local_max);
             if(local_max>final_max)
                 final_max=local_max;
         }
        return final_max;
    }