class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>v;
        v.push_back(0);
        
        for(int i=1;i<=n;i++)
        { int m=i;
           int count=0; 
            while(m!=0)
            {
                if(m&1)
                {
                    count++;
                }
                m=m>>1;
                
            }
         v.push_back(count);
        }
        return v;
        
    }
};