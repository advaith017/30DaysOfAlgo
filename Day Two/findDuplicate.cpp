 int findDuplicate(vector<int>& nums) {
       
     vector <int> dup(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(dup[nums[i]-1]<1)
                dup[nums[i]-1]++;
            else
                return nums[i];
        }
        return -1;
    }
};