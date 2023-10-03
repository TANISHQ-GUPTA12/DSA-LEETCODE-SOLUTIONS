class Solution {
public:
int numIdenticalPairs(vector<int> &nums)
{
//     map<int, vector<int>> mp;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         mp[nums[i]].push_back(i);
//     }
//     int ans = 0;
//     for (auto i : mp)
//     {
//         int sum = ((i.second.size() - 1) * (i.second.size())) / 2;

//         ans += sum;
//     }
//     return ans;
    int cnt=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++)
    {
        if(mpp.find(nums[i])==mpp.end())
        {
            mpp[nums[i]]++;
        }
        else 
        {
           cnt+=mpp[nums[i]]; 
            mpp[nums[i]]++;
        }
        
    }
    return cnt;
}
};