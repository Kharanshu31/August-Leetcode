class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        if(n==0)
            return 0;
        // if(n==1)
        //     return 1;
        sort(citations.begin(),citations.end(),greater<int>());
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(citations[i]<=i)
            {
                return i;
            }
        }
        
        return n;
        
    }
};
