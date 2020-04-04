    void moveZeroes(vector<int>& nums) {
        /*int j=nums.size()-1;
        int i=0;
        for(int i=0;i<n;i++){
            int j=i;
            while(nums[j]==0 && j!=n-1)
                j++;
            swap(nums[i],nums[j]);
        }*/
       /* while(i<=j){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                j--;
            }
            else{
                i++;
            }
        }*/
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
            }
            j++;
        }
        while(i<nums.size()){
            nums[i++]=0;
        }
        
    }