class Solution {
public:
    
    bool power(float num) {
        if(num<4)
            return false;
        
        if(num==4)
            return true;
        
        return power((float)num/(float)4);
    }
    
    bool isPowerOfFour(int num) {
        if(num==1)
            return true;
        float n=(float)num;
        return power(n);
    }
};
