class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    int count=1;
        
        int res=1;
      if(nums.size()==0)
      {
          return 0;
      }
       
        for(int i=0;i<nums.size()-1;i++)
        {  
            if(nums[i]!=nums[i+1])
            {
                           
          if(nums[i+1]-nums[i]==1)
          {
              count++;
              
          }
            else
            { res=max(res,count);
                count=1;
            }
        }
        }
        return max(res,count);
    }
};