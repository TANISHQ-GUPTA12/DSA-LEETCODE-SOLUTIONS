class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // mark for elements in map as true;
        
        //edge case
        if(nums.size()==1)
        {
            return 1;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=true;
        }
        
        int longest=0;
        for(int j=0;j<nums.size();j++)
        {
            if(!mp[nums[j]-1])
            {
                
                int start=nums[j];
                 int cnt=0;
                while(mp[start])
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