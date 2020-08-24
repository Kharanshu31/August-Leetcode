class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int n=num_people;
        int opt=n*(n+1)/2;
        vector<int>sum(n,0);
        int ct=1;
        int index=0;
        bool flag=false;
        while(candies>0)
        {
            if(candies-ct<0)
            {
                flag=true;
                //++index;
                break;
            }
            sum[index%n]+=ct;
            candies-=ct;
            ct+=1;
            //cout<<" sum : "<<sum[index%n]<<"  ct : "<<ct<<"  candies : "<<candies<<"\n";
            ++index;
        }
        if(flag)
        {
            sum[index%n]+=candies;
            //cout<<"Outside sum : "<<index%n<<"  ct : "<<ct<<"  candies : "<<candies<<"\n";
        }
        
        return sum;
    }
};
