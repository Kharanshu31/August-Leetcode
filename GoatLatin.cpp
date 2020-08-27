class Solution {
public:
    string toGoatLatin(string s) {
        int a,i,count=0;

        a=s.size();

        vector<string>ans;
        vector<string>count_a;

        string word="";
        string ct="";
       for(i=0;i<a;i++)
       {
            if(s[i]==' ')
            {
                //cout<<" word : "<<word<<"\n";
                ans.push_back(word);
                count_a.push_back(ct);
                ct="";
                word="";
            }
            else
            {
                word+=s[i];
                if(s[i]=='a')
                    ct+=s[i];
            }
       }
       if(word!="")
            ans.push_back(word);
        string res="";
       for(i=0;i<ans.size();i++)
       {
           string a="";
           for(int j=0;j<=i;j++)
                a+="a";
           string temp=ans[i];
           char c=temp[0];
           if(c>=65 && c<=90)
                c+=32;
           if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
           {
               temp+="ma";
           }
           else
           {
               temp+=temp[0];
               temp.erase(0,1);
               temp+="ma";
               //temp.insert(0,"ma");
           }
           temp+=a;
           res+=temp;
           if(i!=ans.size()-1)
            res+=" ";
       }
    
       return res; 
    }
};
