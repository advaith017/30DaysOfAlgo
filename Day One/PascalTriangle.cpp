class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> Pascal;
        for(int i =0;i<numRows;i++)
        {
            vector <int> row;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                    row.push_back(1);
                else
                    row.push_back(Pascal[i-1][j-1]+Pascal[i-1][j]);
            }
            Pascal.push_back(row);
        }
        return Pascal;
    }
};