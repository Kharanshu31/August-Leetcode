class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>ans;
        stack<int>even,odd;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
                even.push(A[i]);
            else
                odd.push(A[i]);
        }
        while(!even.empty())
        {
            ans.push_back(even.top());
            even.pop();
        }
        while(!odd.empty())
        {
            ans.push_back(odd.top());
            odd.pop();
        }
        
        return ans;
    }
};
