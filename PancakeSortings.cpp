class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int>res;
        vector<int>temp=A;
        sort(temp.begin(),temp.end());
        int k=A.size()-1;
        while(A!=temp)
        {
            int mx=max_element(A.begin(),A.begin()+k+1)-A.begin();//+1 because A.end()=A.size() (out of bounds)
            if(mx!=k)
            {
                res.push_back(mx+1);
                reverse(A.begin(),A.begin()+mx+1);
                res.push_back(k+1);
                reverse(A.begin(),A.begin()+k+1);
            }
            k--;
        }
        
        return res;
    }
};
