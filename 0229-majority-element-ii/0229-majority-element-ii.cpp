class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }                           //calculate the frequency of all elements 
        
        for(const auto&x:mp)
        {
            if(x.second> (nums.size()/3))                 //check q condition
                v.push_back(x.first);                    
        }
        return v;
    }
};