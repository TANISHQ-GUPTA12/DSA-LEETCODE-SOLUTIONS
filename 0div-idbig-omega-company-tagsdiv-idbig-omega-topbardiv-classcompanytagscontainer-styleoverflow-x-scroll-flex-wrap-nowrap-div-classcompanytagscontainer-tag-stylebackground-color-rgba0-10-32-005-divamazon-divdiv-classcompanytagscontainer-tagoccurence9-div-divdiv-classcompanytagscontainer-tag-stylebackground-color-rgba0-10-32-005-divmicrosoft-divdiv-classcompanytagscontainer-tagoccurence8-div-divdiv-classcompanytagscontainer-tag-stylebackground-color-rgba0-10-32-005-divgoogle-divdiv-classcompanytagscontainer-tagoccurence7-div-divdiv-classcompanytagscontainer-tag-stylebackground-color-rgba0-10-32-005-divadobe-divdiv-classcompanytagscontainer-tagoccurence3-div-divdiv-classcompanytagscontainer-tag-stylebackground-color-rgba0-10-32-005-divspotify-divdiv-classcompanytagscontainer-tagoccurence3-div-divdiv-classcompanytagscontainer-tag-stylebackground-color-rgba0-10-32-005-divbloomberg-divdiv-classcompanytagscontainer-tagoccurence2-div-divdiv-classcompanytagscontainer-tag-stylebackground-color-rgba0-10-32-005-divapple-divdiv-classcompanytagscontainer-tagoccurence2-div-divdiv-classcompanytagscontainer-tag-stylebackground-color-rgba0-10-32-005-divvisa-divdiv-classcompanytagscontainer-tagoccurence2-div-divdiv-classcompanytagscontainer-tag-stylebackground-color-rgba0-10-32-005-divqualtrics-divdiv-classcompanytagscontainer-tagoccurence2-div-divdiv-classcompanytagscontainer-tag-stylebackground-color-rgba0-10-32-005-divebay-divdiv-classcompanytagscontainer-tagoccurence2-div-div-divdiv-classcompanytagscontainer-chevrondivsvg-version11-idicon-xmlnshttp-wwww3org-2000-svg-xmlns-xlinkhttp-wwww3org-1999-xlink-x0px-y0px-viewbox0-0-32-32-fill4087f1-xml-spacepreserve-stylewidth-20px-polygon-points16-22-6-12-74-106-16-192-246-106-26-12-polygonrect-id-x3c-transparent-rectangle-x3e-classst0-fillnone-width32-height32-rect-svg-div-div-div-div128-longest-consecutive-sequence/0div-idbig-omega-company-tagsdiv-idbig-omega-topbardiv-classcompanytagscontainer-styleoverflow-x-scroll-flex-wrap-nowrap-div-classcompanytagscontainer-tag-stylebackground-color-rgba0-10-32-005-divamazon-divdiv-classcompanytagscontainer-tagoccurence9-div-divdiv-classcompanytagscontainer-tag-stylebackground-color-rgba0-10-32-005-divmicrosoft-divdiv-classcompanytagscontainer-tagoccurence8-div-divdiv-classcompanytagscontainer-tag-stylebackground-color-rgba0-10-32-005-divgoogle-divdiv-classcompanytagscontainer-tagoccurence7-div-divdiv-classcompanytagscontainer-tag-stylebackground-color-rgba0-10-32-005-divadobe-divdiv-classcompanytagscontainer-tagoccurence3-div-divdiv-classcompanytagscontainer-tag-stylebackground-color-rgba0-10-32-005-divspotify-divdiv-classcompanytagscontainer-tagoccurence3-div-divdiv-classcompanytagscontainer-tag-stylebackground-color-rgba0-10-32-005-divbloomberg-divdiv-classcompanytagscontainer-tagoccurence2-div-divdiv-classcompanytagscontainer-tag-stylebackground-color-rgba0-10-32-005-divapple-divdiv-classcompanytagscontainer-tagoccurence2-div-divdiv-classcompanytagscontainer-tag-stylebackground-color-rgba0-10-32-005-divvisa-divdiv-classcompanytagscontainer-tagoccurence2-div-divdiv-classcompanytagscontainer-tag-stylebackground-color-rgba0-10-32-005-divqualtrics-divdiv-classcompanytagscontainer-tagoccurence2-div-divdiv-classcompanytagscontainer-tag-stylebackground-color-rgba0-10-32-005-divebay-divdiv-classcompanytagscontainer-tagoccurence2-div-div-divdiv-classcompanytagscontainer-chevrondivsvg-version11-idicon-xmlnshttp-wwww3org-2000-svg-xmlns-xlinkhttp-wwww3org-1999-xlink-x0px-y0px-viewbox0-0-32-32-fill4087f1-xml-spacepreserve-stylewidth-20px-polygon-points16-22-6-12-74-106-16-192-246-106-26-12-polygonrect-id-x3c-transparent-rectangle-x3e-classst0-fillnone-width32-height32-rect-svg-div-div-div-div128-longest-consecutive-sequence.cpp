class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]=1;
        }
  if(nums.size()==1)
  {
      return 1;
  }
        int longest=0;
        for(int i=0;i<nums.size();i++)
        {  int cnt=0;
          if(mpp.find(nums[i] - 1) == mpp.end())
            {
                  int start=nums[i];
                while(mpp.count(start)>0)
                {   
                    cnt++;
                    start++;
                }
             longest=max(cnt,longest);
                      }
                      }
                      
        return longest;
    }
};