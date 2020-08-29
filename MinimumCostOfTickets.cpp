class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        map<int,int>m;
        
        for(int i=0;i<days.size();i++)
            m[days[i]]++;
        
        int dp[366];
        
        dp[0]=0;
        
        for(int i=1;i<=365;i++)
        {
            if(!m.count(i))
                dp[i]=dp[i-1];
            else
            {
                int day1=dp[i-1]+costs[0];
                
                int day7=dp[max(0,i-7)]+costs[1];
                
                int day30=dp[max(0,i-30)]+costs[2];
                
                dp[i]=min(day1,min(day7,day30));
            }
        }
        
        return dp[365];
        
    }
};
