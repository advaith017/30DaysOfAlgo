 void reverseArray(vector<int>& arr, int start, int end)
    {
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }    
 
    void nextPermutation(vector<int>& nums) {
        //lexicographic permutation algorithm
        //Locate a where a<b(b is one index more than a) and a is farthest
        //Locate farthest c where a<c
        //swap a and c
        //reverse b to end of array
        int a,b,c,temp;
        int length =nums.size()-1;
        a=length-1,b=length,c=length;
        while(a>=0 && nums[a]>=nums[b])
        {
            a--;
            b--;
        }
        if(a>=0)
        {
        while(c>=0 && nums[a]>=nums[c])
            c--;
            temp=nums[c];
            nums[c]=nums[a];
            nums[a]=temp;
            reverseArray(nums,b,length);
        } 
        else
            sort(nums.begin(),nums.end());
    }
};