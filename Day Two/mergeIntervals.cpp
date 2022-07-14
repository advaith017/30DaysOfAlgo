vector<vector<int>> merge(vector<vector<int>>& intervals) {
 
    if(intervals.empty())
        return {};
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> result;
    result.push_back(intervals[0]);
       int k=0;
       for(int i =1;i<intervals.size();i++)
        {
           if(intervals[i][0]>result[k][1])
              { result.push_back(intervals[i]);
              k++;
              }
           else
            result[k][1]=max(intervals[i][1],result[k][1]);
        }
        return result;
    }