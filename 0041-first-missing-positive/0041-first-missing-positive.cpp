// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         map<int,int>mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]>0)
//             {
//                 mp[nums[i]]++;
//             }
            
//         }
//         int max=0;
//         for(int x=0;x<nums.size();x++)
//         {
//           if(nums[x]>max)
//             {
//                 max=nums[x];
//             }
//         }
        
//         for(int j=1;j<=max;j++)
//         {
//             if(mp[j]==0)
//             {
//                 return j;
//             }
            
            
//         }
//         return max+1;
        
        
//         }
// };
//tc-> O(n+max)  sc->O(max)




// original array m replacement krengh 
// sc-> O(1)

class Solution
{
public:
    int firstMissingPositive(vector<int>& nums)
    { int n=nums.size();
        
        for(int i = 0; i < n; ++ i)
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        
        for(int i = 0; i < n; ++ i)
            if(nums[i] != i + 1)
                return i + 1;
        
        return n + 1;
    }
};