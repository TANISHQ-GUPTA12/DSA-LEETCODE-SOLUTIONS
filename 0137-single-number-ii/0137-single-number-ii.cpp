class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int min=1000;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
        return 0;
    }
};