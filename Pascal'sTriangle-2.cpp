class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ar(rowIndex+1);
        for(int i=0;i<=rowIndex;i++)
        {
            ar[i].resize(i+1);
            ar[i][0]=1;
            ar[i][i]=1;
            for(int j=1;j<i;j++)
            {
                  ar[i][j]=ar[i-1][j]+ar[i-1][j-1];
            }
            
        }
        
        return ar[rowIndex];
        
        
    }
};
