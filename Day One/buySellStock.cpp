int maxProfit(vector<int>& a) {
        int buy=a[0],profit=0;
        for(int i=1;i<a.size();i++)
        {
                buy=min(buy,a[i]);
                profit=max(profit,a[i]-buy);   
        }
 
        return profit;
        
    }