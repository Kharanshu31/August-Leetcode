class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>h(1000,0);
        //map<char,int>m;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            //m[s[i]]++;
            h[s[i]-'A']++;
            if(h[s[i]-'A']%2==0)
                ans+=2;
        }
        
        return s.length()>ans ? ans+1 : ans;
        
    }
};
