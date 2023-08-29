class Solution {
public:
    int bitwiseComplement(int n) {
        int c=n;
        int mask=0;
        if(n==0)
     
            return 1;
        
        while(c!=0)
        {
            mask=(mask<<1) | 1;
            c=c>>1;
        }
        int ans= (~n)& mask;
        return ans;
    }
};