class WordDictionary {
public:
    /** Initialize your data structure here. */
    
    bool check(string a,string b)
    {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]=='.')
                continue;
            else if(a[i]!=b[i])
                return false;
        }
        return true;
    }
    
    map<int,vector<string>>m;
    WordDictionary() {
        
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        m[word.size()].push_back(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        
//             for(string s:m[word.size()])
//             {
//                 for(int i=0;i<word.size();i++)
//                 {
//                     if(word[i]=='.')
//                         continue;
//                     if(word[i]!=s[i])
//                         return false;
//                 }
//                 return true;
//             }
        
//         return false;
         int n=word.size();
        for(string s : m[n])
        {
            if(check(word,s))
                return true;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
