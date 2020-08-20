class Solution {
public:
    int titleToNumber(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            int num=(int)ch-64;
            ans+=pow(26,n-i-1)*num;
        }
        return ans;
    }
};
