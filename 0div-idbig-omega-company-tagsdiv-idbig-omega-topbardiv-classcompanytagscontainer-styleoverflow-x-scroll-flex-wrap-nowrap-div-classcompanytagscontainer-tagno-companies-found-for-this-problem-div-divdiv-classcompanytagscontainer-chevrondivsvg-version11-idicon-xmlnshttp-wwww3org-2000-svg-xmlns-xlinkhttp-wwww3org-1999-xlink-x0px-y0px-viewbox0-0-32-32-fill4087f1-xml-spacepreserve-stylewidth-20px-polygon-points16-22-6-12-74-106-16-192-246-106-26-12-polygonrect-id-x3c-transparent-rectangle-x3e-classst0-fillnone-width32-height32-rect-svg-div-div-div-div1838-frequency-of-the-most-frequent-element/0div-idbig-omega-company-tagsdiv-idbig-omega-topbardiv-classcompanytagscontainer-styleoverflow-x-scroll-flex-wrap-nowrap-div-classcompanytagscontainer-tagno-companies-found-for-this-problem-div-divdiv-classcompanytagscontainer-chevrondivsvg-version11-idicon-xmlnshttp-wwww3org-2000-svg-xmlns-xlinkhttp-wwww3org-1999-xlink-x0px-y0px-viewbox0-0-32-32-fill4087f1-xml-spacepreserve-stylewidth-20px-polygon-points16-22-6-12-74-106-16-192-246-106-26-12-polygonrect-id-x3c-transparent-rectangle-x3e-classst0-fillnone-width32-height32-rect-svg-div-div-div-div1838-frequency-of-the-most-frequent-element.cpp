class Solution {
public:
bool possible(vector<int>& nums, int k, int window)
{
    long long int windowsum = 0;
    for(int i = 0 ; i < window;i++)
    {
        windowsum+=nums[i];
    }
    long long int totalsum = 1LL* nums[window-1]*window;
    if(totalsum - windowsum <= k)
    {
        return 1;
    }
    int j = 0 ;
    for(int i = window; i < nums.size(); i++) //  sliding window started
    {
        windowsum -= nums[j]; // removiing last ele 
        windowsum += nums[i]; // adding last ele 
        totalsum =  1LL * nums[i] * window;
        if(totalsum - windowsum <= k)
        {
            return 1;
        }
        j++;
    }
    return 0 ; 
}
    int maxFrequency(vector<int>& nums, int k) {
       int low = 1 ; 
       sort(nums.begin(), nums.end());
       int high = nums.size();
       int ans = 0; 
       while(low<=high)
       {
           int mid = low + (high - low )/2;
           if(possible(nums,k, mid))
           {
               ans = mid;
               low = mid + 1;
           } 
           else
           {
               high = mid-1;
           }
       }
       return ans; 
    }
};
 
// https://leetcode.com/problems/frequency-of-the-most-frequent-element/discuss/4301431/GOOD-EXPLANATION-C%2B%2B-SOLUTION