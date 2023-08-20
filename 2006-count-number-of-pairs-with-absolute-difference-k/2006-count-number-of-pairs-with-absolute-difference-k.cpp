class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        // int cnt=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(abs(nums[i]-nums[j])==k)
        //         {
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
        //BRUTE FORCE 


        //OPTIMIZED BY HASHMAP 

        unordered_map<int,int>mpp; 
        int cnt=0;
      for(int i=0;i<nums.size();i++)
      {
        //   if( mpp.find( abs(nums[i]+k) )!=mpp.end()) 
        //   {   
              cnt+=mpp[nums[i]+k]+mpp[nums[i]-k];
    //   }
    //   if( mpp.find(abs(nums[i]-k))!=mpp.end() )
    //   {
             
    //   }
      mpp[nums[i]]++;
      }
      return cnt;
    }
};

    