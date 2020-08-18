class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>hash(n+1,0);
//         for(int i=0;i<n;i++)
//         {
//             hash[nums[i]++];
//         }
        
//         vector<int>ans;
//         for(int i=0;i<n+1;i++)
//         {
//             if(hash[i]==2)
//                 ans.push_back(i);
//         }
//         return ans;
        if(nums.empty())return {};
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int no:nums)mp[no]++;
        for(auto it:mp)if(it.second==2)ans.push_back(it.first);
        return ans;
    }
        
};
