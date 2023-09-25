class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        //traverse arr
        int cnt=1;
        int longest=0;
        if(nums.size()==1)
        {
            return 1;
        }
        for(int i=1;i<nums.size();i++)
        {   
            if(nums[i]!=nums[i-1])
            {
                if(nums[i]-nums[i-1]==1)
                {
                    cnt++;
                }
                else
                {
                    cnt=1;
                }
            }
           
            longest=max(longest,cnt);
        }
        return longest;
    }
};