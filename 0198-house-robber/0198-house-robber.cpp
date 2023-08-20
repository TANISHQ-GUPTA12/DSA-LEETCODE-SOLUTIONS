class Solution {
public:   

                                      // WITHOUT DP ....SIMPLE MATHS 
                                      // BY :TANISHQ 
    int rob(vector<int>& nums) {

       int sum=0;int sum1=0; 
       //sum-> sum of even indexes 
       //sum1-> sum of odd indexes

        for(int i=0;i<nums.size();i++)
        {  
            if(!(i&1))  // check for even index 0->2->4
            {
            sum+=nums[i];
            // check for maximum money from either odd index or even index
            sum=max(sum,sum1);   
            }
            if(i&1)     // check for odd index 1->3...
            {
            sum1+=nums[i];
                     // check for maximum money from either odd index or even index
            sum1=max(sum,sum1);
        }}
        if(sum>sum1)
        // check for highest money to be robbed 
       return sum;
       else
       return sum1;
       
        
        
    }
};