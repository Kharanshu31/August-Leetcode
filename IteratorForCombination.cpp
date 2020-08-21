class CombinationIterator {
public:
    vector<string>ar;
    int cur=0;
    CombinationIterator(string characters, int combinationLength) {
        
        int n=combinationLength;
        
//         for(int i=0;i<=characters.length()-n;i++)
//         {
//             for(int j=i;j<=characters.length()-n;j++)
//             {
//                 string s=characters.substr(j,n);
//                 ar.push_back(s);
//             }
//         }     
//         reverse(ar.begin(),ar.end());

        for(int i=1;i<=1<<characters.length();i++)
        {
            string temp="";
            for(int j=0;j<characters.length();j++)
            {
                if(i & 1<<j)
                    temp+=characters[j];
            }
            if(temp.length()==n)
                ar.push_back(temp);
        }
        
        sort(ar.begin(),ar.end());
        
    }
    
    string next() {
        return ar[cur++];
    }
    
    bool hasNext() {
        return cur!=ar.size();
    }
};
