class Solution {
public:
    bool detectCapitalUse(string word) {
        int ans=0;
        bool flag=false;
        if(word[0]>='A' && word[0]<='Z')
            flag=true;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
                ++ans;
        }
        if(ans==0 || ans==word.length() || (flag && ans==1) )
            return true;
        
        return false;
    }
};
