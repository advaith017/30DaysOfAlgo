 void sortColors(vector<int>& nums) 
{
        int count[3],i,j=0,n=nums.size();
        for(i=0;i<n;i++)
        {
            count[nums[i]]++;
        }
        i=0;
        while(i<n)
        {
            if(count[j]--)
                nums[i++]=j;
            else
                j++;
        }
 }